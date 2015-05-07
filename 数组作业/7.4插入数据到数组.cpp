#include<stdio.h>
#include<stdlib.h>

int main()
{
   int a[20]={1,3,5,7,9,11,13,15,17,19,21},b,i,j;
   printf("请输入要插入的数\n");
   scanf("%d",&b);
   for(i=0;i<12;i++)
       if(b<a[i])
          {
             break;
          }
   for(j=11;j>i;j--)
       {
           a[j]=a[j-1];
       }
   a[j]=b;
   for(j=0;j<12;j++)
      printf("%d ",a[j]);
   system("pause");
   return 0;
}
