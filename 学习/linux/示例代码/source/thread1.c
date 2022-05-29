#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void* thread1()
{
    pthread_detach(pthread_self());//分离后仍可被等待
    printf("pid is: %d, tid is: %d\n", getpid(),pthread_self());
    return (void*)1;
}
int main()
{
    pthread_t tid;
    void *ret;
    int err = pthread_create(&tid, NULL, thread1, NULL);
    if (err != 0)
    {
        perror("pthread_create\n");
        return err;
    }
    int tmp = pthread_join(tid, &ret);
    if (tmp == 0)
    {
        printf("wait success\n");
    }
    else
    {
        printf("wait failed\n");
    }
    printf(" pid is: %d, tid is: %d\n", getpid(),pthread_self());
    sleep(1);
    return 0;
}
