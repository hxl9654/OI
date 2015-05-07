#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,*p;
    p=&a;
    *p=100;
    printf("%d",a);
    system("pause");
    return 0;
} 
