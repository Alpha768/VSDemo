
#include<stdio.h>
#include "./Add/Add.h"
extern void TestFun();
int main(int argc,char **argv)
{
    printf("Hello World\n");
    TestFun();
    AddFunc();
    getchar();
    return 0;
}



