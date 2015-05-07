/*完全数(Perfect number)，又称完美数或完备数，*/
/*是一些特殊的自然数:它所有的真因子(即除了自身以外的约数)的和(即因子函数)，恰好等于它本身。*/
 /*例如:第一个完全数是6，它有约数1、2、3、6，除去它本身6外，其余3个数相加，*/
/*找出1000以内的完全数 */
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int a[10000]={0},n=1,j=0,t=0;
   for(;n<1000;n++)
     {
       for(int i=1;i<n;i++)
           if(n%i==0){a[j]=i;j++;}
       for(int i=0;i<j;i++)
           t=t+a[i];
       if(n==t)printf("%d ",n);
       t=0;
       j=0;
     }
   system("pause");
   return 0;
}
