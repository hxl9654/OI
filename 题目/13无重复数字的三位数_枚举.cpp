/*��1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�����ö�ٷ�*/ 
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int i=1,j=1,k=1,n=0;
   for(;i<5;i++) 
       for(j=1;j<5;j++)
          for(k=1;k<5;k++)
              if(i!=j&&i!=k&&j!=k){printf("%d ",1*100+j*10+k);n++;}
   printf("%d��",n);
   system("pause");
   return 0; 
}
