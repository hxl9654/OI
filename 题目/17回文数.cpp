/*һ��5λ�����ж����ǲ��ǻ���������12321�ǻ���������λ����λ��ͬ��ʮλ��ǧλ��ͬ��*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n,a[5]={0};
   printf("������N\n");
   scanf("%d",&n);
   a[0]=n%10;
   a[1]=n/10%10;
   a[2]=n/100%10;
   a[3]=n/1000%10;
   a[4]=n/10000;
   if(a[0]==a[4]&&a[1]==a[3])printf("��\n");
   else printf("����\n");
   system("pause");
   return 0;
}
