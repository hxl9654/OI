/*水仙花数是指一个 n 位数 ( n≥3 )，它的每个位上的数字的 n 次幂之和等于它本身。
（例如：1^3 + 5^3 + 3^3 = 153）
三位的水仙花数共有4个：153，370，371，407；
四位的水仙花数共有3个：1634，8208，9474；
五位的水仙花数共有3个：54748，92727，93084；*/
#include<stdio.h>
#include<stdlib.h>
int main()
{ 
   int a[10]={0},n=0,l=0,i,b[10]={1,1,1,1,1,1,1,1,1,1},t=0,t1=0;
   printf("输入数字\n");
   scanf("%d",&n);
   for(int j=1;j<10;j++)
      for(int f=0;f<j;f++)
          b[j]=b[j]*10;
   for(i=1;i<10;i++) 
       if(n/b[i-1]<1){l=i-1;break;} 
   printf("%d位数\n",l);
   if(l<3)exit(0);
   for(i=2;i<l+2;i++)
       a[i]=n%b[i-1]/b[i-2];
   for(i=2;i<l+2;i++)
      { t1=a[i];
        for(int j=1;j<l;j++)
            a[i]=a[i]*t1;
        t=t+a[i];
      }
   if(t==n)printf("是\n");
   else printf("不是\n");
   system("pause");
}

