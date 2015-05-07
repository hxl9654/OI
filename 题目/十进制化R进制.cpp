/*十进制化R进制*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int r=10,n=0,a[10000],b[10000],i=0;
   printf("十进制化R进制，请输入R\n");
   scanf("%d",&r);
   printf("请输入数字\n");
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
