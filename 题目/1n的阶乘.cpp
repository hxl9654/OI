#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,n,y=1;
    printf("请输入一个整数: ");
    scanf("%d",&n);
    for(x=1;x<=n;x++)
        y=y*x;
    printf("n!=%d\n",y);
    system("pause");
    return 0;
      }
