/*�����������������ķƲ�����(Fibonacci)���У����һ��Ϊ0���ڶ���Ϊ1��*/
/*�ӵ����ʼ����ÿһ���ǰ����ĺ͡�������������ǰN�����ݡ�*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int a[100000]={0},n=0;
   a[0]=1;
   a[1]=1;
   for(int i=2;i<100000;i++)
       a[i]=a[i-2]+a[i-1];
   printf("��������\n");
   scanf("%d",&n);
   n--;
   printf("%d\n",a[n]);
   system("pause");
   return 0; 
}
