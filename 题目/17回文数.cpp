/*一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n,a[5]={0};
   printf("请输入N\n");
   scanf("%d",&n);
   a[0]=n%10;
   a[1]=n/10%10;
   a[2]=n/100%10;
   a[3]=n/1000%10;
   a[4]=n/10000;
   if(a[0]==a[4]&&a[1]==a[3])printf("是\n");
   else printf("不是\n");
   system("pause");
   return 0;
}
