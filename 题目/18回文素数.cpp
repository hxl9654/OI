/*回文素数： */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
   int n,a[5]={0},t=0,e,i;
   printf("请输入N\n");
   scanf("%d",&n);
   a[0]=n%10;
   a[1]=n/10%10;
   a[2]=n/100%10;
   a[3]=n/1000%10;
   a[4]=n/10000;
   e=sqrt(n)+5;
   for(i=2;i<e&&t==0&&i<n;i++)
        if(n%i==0){t=1;break;}
   if(a[0]==a[4]&&a[1]==a[3]&&t==0)printf("是\n");
   else printf("不是\n");
   system("pause");
   return 0;
}
