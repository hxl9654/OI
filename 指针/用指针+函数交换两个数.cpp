#include<stdio.h> 
#include<stdlib.h>

int max(int*x,int*y)
{int t;
t=*x;
*x=*y;
*y=t;
}

int main()
{int a,b,c;
printf("请输入两个整数a，b:");
int *pa=&a,*pb=&b;
scanf("%d%d",&a,&b);
c=max(pa,pb);
printf("%d %d",a,b);

system("pause");
return 0;

} 
