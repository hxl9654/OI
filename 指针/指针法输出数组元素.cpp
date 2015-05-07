#include<stdio.h>
#include<stdlib.h>
int main()
{
   int a[5]={0};
   int *p;
   p=a;
   for(int i=0;i<5;i++)
       scanf("%d",&a[i]); 
   for(;p<a+5;p++)
       printf("%d ",*p);
   system("pause");
   return 0;
}
