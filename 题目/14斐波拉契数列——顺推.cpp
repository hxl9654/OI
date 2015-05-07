/*【问题描述】著名的菲波拉契(Fibonacci)数列，其第一项为0，第二项为1，*/
/*从第三项开始，其每一项都是前两项的和。编程求出该数列前N项数据。*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int a[100000]={0},n=0;
   a[0]=1;
   a[1]=1;
   for(int i=2;i<100000;i++)
       a[i]=a[i-2]+a[i-1];
   printf("输入项数\n");
   scanf("%d",&n);
   n--;
   printf("%d\n",a[n]);
   system("pause");
   return 0; 
}
