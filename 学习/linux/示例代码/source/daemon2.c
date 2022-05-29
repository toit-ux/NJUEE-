#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <fcntl.h>
 
int main() 
{
    pid_t pid;
    int i,fd;
 
    if ((pid=fork())<0)  // 出错
    {
        printf("fork error.\n");
        exit(1);
    }else if (pid>0)  // fork且退出父进程
        exit(0);
 
    setsid();    // 在子进程中创建新会话。
    chdir("/tmp");  // 设置工作目录为根
    umask(0);    // 设置权限掩码 666 & (~0) 111 111 111
    for(i=0; i < getdtablesize(); i++)  //getdtablesize返回子进程文件描述符表的项数
        close(i);                	// 关闭这些不将用到的文件描述符
 
    while(1) 
    {
        sleep(2);
        printf("Never print!\n");    // 由于文件描述符关闭，不会输出到终端
    }
 
    return 0;
}
