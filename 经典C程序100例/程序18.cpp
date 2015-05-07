//【程序18】
//	题目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222
//(此时共有5个数相加)，几个数相加有键盘控制。
//.程序分析：关键是计算出每一项的值。
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
   int a,n,c=1;
   long int sum=0,b[10000]={0};
   printf("请输入数字，相加次数\n");
   scanf("%d,%d",&a,&n);
   b[0]=a;
   for(int k=n;k>0;k--)
   for(int t=0;t<k;t++)
       {
         for(int j=0;j<t;j++)
             c=c*10;
         sum=sum+c*a;
         c=1;
       }
       printf("结果是%d\n",sum);
   system("pause");
   return 0;
}

