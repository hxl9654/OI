/*ʮ���ƻ�R����*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int r=10,n=0,a[10000],b[10000],i=0;
   printf("ʮ���ƻ�R���ƣ�������R\n");
   scanf("%d",&r);
   printf("����������\n");
   scanf("%d",&n);
   for(;;)
       {
          a[i]=n%r;
          i++;
          n=n/r;
          if(n==0){i--;break;}      
       }
   for(;i>=0;i--)
       printf("%d",a[i]);
   printf("\n");
   system("pause");
   return 0;
} 
