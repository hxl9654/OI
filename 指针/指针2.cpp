#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,t;
    int *pa=&a,*pb=&b;
    *pa=100;
    *pb=200;
    t=*pa;
    *pa=*pb;
    *pb=t;
    printf("%d %d",*pa,*pb);
    system("pause");
    return 0;
}
