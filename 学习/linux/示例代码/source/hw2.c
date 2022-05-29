#include<stdio.h>
#include<dirent.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
 
 
int main(int argc, char * argv[])
{
 struct stat StatBuf;
 int bits, fd1;
 fd1 = open(argv[1], O_RDWR|O_CREAT,S_IRWXU|S_IRWXG|S_IRWXO);
 if(fd1 < 0) perror("Open file failed.\n");
 fstat(fd1,&StatBuf);
 if(S_ISREG(StatBuf.st_mode))
 printf("%s is a regular file\n", argv[1]);
 else if(S_ISDIR(StatBuf.st_mode))
 printf("%s is a directory\n", argv[1]);
 else if(S_ISCHR(StatBuf.st_mode))
 printf("%s is a char device\n", argv[1]);
 else if(S_ISBLK(StatBuf.st_mode))
 printf("Block file\n");
 else if(access(argv[1], X_OK)==0)
 printf("%s is a block device\n", argv[1]);
 else
 printf("None of above\n");
 
 printf("inode:%d\n",StatBuf.st_ino);
 printf("uid:%d\n",StatBuf.st_uid);
 printf("nlink:%d\n",StatBuf.st_nlink);
 printf("gid:%d\n",StatBuf.st_gid);
 printf("Size:%d\n",StatBuf.st_size);
 
 if(fchmod(fd1,S_IRWXU|S_IRWXG|000)==0)
 printf("Chmod success.\n");
 else
 printf("Chmod failed.\n");
 
 return 0;
}

