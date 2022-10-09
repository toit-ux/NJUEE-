#include<stdio.h>
#include<string.h>
int main()
{
    int b[4]={0,1,2,3};
    int *a=(int*)malloc(8*sizeof(int));
    memcpy(a,b,7);
    free(a);

    return 0;

}