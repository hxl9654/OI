/*有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？——枚举法*/ 
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int i=1,j=1,k=1,n=0;
   for(;i<5;i++) 
       for(j=1;j<5;j++)
          for(k=1;k<5;k++)
              if(i!=j&&i!=k&&j!=k){printf("%d ",1*100+j*10+k);n++;}
   printf("%d个",n);
   system("pause");
   return 0; 
}
