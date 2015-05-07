//"	【程序14】
//"	题目：将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。
//"	程序分析：对n进行分解质因数，应先找到一个最小的质数k，然后按下述步骤完成：
//"	(1)如果这个质数恰等于n，则说明分解质因数的过程已经结束，打印出即可。
//"	(2)如果n<>k，但n能被k整除，则应打印出k的值，并用n除以k的商,作为新的正整数你n,　
//重复执行第一步。
//"	(3)如果n不能被k整除，则用k+1作为k的值,重复执行第一步。

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
   int n;
   int i,t=1,a[100000]={0},j,b[100]={0},c=0,e,f=0;
   printf("请输入用于分解质因数的数。\n"); 
   scanf("%d",&n);
   e=n;
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
   for(int d=0;d<n;d++)
     {
       if((a[d]!=0)&&(e%d==0))
         {
             b[c]=d;c++;e=e/d;f=1;
             for(;e%d==0;)
               {b[c]=d;c++;e=e/d;}
         }                    
     }
   if(f!=0){printf("%d=%d",n,b[0]);
            for(c=1;b[c]!=0;c++)
              printf("*%d",b[c]);
           }
   else printf("不能分解"); 
   printf("\n");
   system("pause");
   return 0;
}
