//������18��
//	��Ŀ����s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�����2+22+222+2222+22222
//(��ʱ����5�������)������������м��̿��ơ�
//.����������ؼ��Ǽ����ÿһ���ֵ��
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
   int a,n,c=1;
   long int sum=0,b[10000]={0};
   printf("���������֣���Ӵ���\n");
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
       printf("�����%d\n",sum);
   system("pause");
   return 0;
}

