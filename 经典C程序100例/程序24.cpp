//【程序24】
//题目：有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。
//程序分析：请抓住分子与分母的变化规律。


#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
  double sum=0;
  int a[21];
  a[0]=1;a[1]=2;
  for(int i=2;i<21;i++)
     a[i]=a[i-2]+a[i-1];
  for(int i=0;i<20;i++)
      sum=sum+(a[i+1]/a[i]);
  printf("%lf\n",sum);
  system("pause");
  return 0;  
}
