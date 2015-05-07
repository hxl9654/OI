//【程序25】
//题目：求1+2!+3!+...+20!的和
//程序分析：此程序只是把累加变成了累乘。

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
  int i=1,a=1,sum;
  for(;i<21;i++)
      {
       a=1;
       for(int t=1;t<=i;t++)
           a=a*t;
       sum=sum+a;
      }
  printf("%d\n",sum);
  system("pause");
  return 0;  
}
