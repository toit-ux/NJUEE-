#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/file.h>
#include <sys/mman.h>
#include <sys/shm.h>
#include <sys/wait.h>
#include <fcntl.h>
 
void error_and_die(const char *msg) {
  perror(msg);
  exit(EXIT_FAILURE);
}
 
int main(int argc, char *argv[]) {
  int r;
 
  const char *memname = "sample";
  const size_t region_size = sysconf(_SC_PAGE_SIZE);
 
  int fd = shm_open(memname, O_CREAT | O_TRUNC | O_RDWR, 0666); //创建共享内存
  if (fd == -1)
    error_and_die("shm_open");
 
  r = ftruncate(fd, region_size);  //设置共享内存大小
  if (r != 0)
    error_and_die("ftruncate");
 
  void *ptr = mmap(0, region_size, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0); //共享内存映射到内存中(以有名的方式映射)
  if (ptr == MAP_FAILED)
    error_and_die("mmap");
  close(fd);
 
  pid_t pid = fork();
  /*子进程进行写操作*/
  if (pid == 0) {
    u_long *d = (u_long *) ptr;
    *d = 0xdbeebee;
    exit(0);
  }
  /*父进程读操作*/
  else {
    int status;
    waitpid(pid, &status, 0);
    printf("child wrote %#lx\n", *(u_long *) ptr);
  }
 
  r = munmap(ptr, region_size);
  if (r != 0)
    error_and_die("munmap");
 
  r = shm_unlink(memname);  //删除共享内存
  if (r != 0)
    error_and_die("shm_unlink");
 
  return 0;
}
