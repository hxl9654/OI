//	【程序19】
//	题目：一个数如果恰好等于它的因子之和，这个数就称为"完数"。
//例如6=1＋2＋3.编程找出1000以内的所有完数。
//	程序分析：请参照程序<--上页程序14
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
 int n;
 int i,t=1,a[100000]={0},j,b[100]={0},c=0,e,g=0,h=1;
 for(n=1;n<1001;n++)
  {
   for(int k=0;k<101;k++)
      b[k]=0;
   g=0;
   e=n;
   c=0;
   for(i=0;i<n;i++)
   {
     a[i]=i;
   }
   a[1]=0;
   for(i=2;i<sqrt(n)+1;i++)
   {
    for(j=i+1;j<n;j++)
    {if(a[i]!=0&&a[j]!=0)
     {if(a[j]%a[i]==0)a[j]=0;}
    }
   }
   for(int d=0;d<=n;d++)
     {
       if((a[d]!=0)&&(e%d==0))
         {
             b[c]=d;c++;e=e/d;
             for(;e%d==0;)
               {b[c]=d;c++;e=e/d;}
         } 
     }
   b[c]=1; 
   if((e==n)&&(n!=1))b[1]=n; 
   //printf("%d %d %d %d %d %d %d %d\n",n,b[0],b[1],b[2],b[3],b[4],b[5],b[6]);
   for(int d=0;b[d]!=0;d++)
       g=g+b[d];
   if(g==n){printf("%d ",n);h++;}
   if(h==7){printf("\n");h=1;}
  } 
   printf("\n");
   system("pause");
   return 0;
}
