/*�۰����:��15��������С�����˳�����һ�������С�
����һ������Ҫ�����۰뷨���ҷ��ҳ������������еڼ���Ԫ�ص�ֵ��
������������ڣ���������ڱ��С�
�磺1 3 4 5 6 8 12 23 34 44 56 58 68
����7��12 */ 
#include<stdio.h>
#include<stdlib.h>
int b,l=0,r=13,t=0,di=0;
int a[13]={1,3,4,5,6,8,12,23,34,44,56,58,68};
void lookup();
int main()
{
   printf("������Ҫ���ҵ���\n");
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
   else if(l==r&&b!=a[l]){printf("����\n");di=1;return;}
   else if(l+1==r&&b!=a[r]){printf("����\n");di=1;return;}
   else if(b>a[t]){l=t;t=0;lookup();}
   else if(b<a[t]){r=t;t=0;lookup();}
  
}
