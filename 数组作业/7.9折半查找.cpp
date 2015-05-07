/*折半查找:有15个数按从小到大的顺序放在一个数组中。
输入一个数，要求用折半法查找法找出该数是数组中第几个元素的值。
如果该数不存在，输出“不在表中“
如：1 3 4 5 6 8 12 23 34 44 56 58 68
查找7和12 */ 
#include<stdio.h>
#include<stdlib.h>
int b,l=0,r=13,t=0,di=0;
int a[13]={1,3,4,5,6,8,12,23,34,44,56,58,68};
void lookup();
int main()
{
   printf("请输入要查找的数\n");
   scanf("%d",&b);
   lookup();
   if(di==0)printf("%d",t+1);
   system("pause");
   return 0;
}
void lookup()
{  
   if(b==a[t])return;
   t=(l+r)/2;
   if(r==l+1&&a[r]==b){t=r;return;}
   else if(l==r&&b!=a[l]){printf("不在\n");di=1;return;}
   else if(l+1==r&&b!=a[r]){printf("不在\n");di=1;return;}
   else if(b>a[t]){l=t;t=0;lookup();}
   else if(b<a[t]){r=t;t=0;lookup();}
  
}
