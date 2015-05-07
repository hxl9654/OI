/*  将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5  */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
   int n=0,a[100000]={0},t[100]={0},r=0,nt=0;
   scanf("%d",&n);
   nt=n;
   //for(int i=1;i<=n;i++)
   //    a[i]=i;
   //a[1]=0;
   //for(int i=3;i<=n;i++)
   //    {
   //      for(int j=1;j<i;j++)
   //          if(a[i]!=0&&a[j]!=0&&a[i]%a[j]==0){a[i]=0;break;}
   //    }
   for(int i=2;i<=n;i++)
       if(n%i==0)
       {t[r]=i;r++;n=n/i;for(;n%i==0;){t[r]=i;r++;n=n/i;}}
   t[r]=1;
   printf("%d=",nt);
   for(int i=0;t[i]!=1;i++)
       printf("%d*",t[i]);
   printf("1\n");
   system("pause");
   return 0;
       
}
