//������20��
//��Ŀ��һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻
//�����£������ڵ�10�����ʱ�������������ף���10�η�����ߣ�

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
   double h[10]={0},h1;
   h[0]=100.0;
   for(int i=1;i<10;i++)
      h[i]=(h[i-1]/2);
   h1=h[0];
   for(int i=1;i<10;i++)
      h1=h1+h[i]*2;
   printf("%lf %lf\n",h[9],h1);
   system("pause");
   return 0;
}
