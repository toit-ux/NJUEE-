#include<stdio.h>

int main()
{
    char buf[20];
    printf("please input your trouble, my dear hero: \n");
    gets(buf);
    if(strcmp(buf,"自我怀疑"))
    {
        printf("每个人都是美好的。除了自己之外，没有人会对你贯之于拙劣之名。如果有，说明他们也并没有发现自己的美好。找到适合自己的存在形式，这是我一生最根本的使命。\n");
        printf("don't forget you are excellent,yuan!\n")
    }
    return 0;
}