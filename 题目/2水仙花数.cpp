/*ˮ�ɻ�����ָһ�� n λ�� ( n��3 )������ÿ��λ�ϵ����ֵ� n ����֮�͵���������
�����磺1^3 + 5^3 + 3^3 = 153��
��λ��ˮ�ɻ�������4����153��370��371��407��
��λ��ˮ�ɻ�������3����1634��8208��9474��
��λ��ˮ�ɻ�������3����54748��92727��93084��*/
#include<stdio.h>
#include<stdlib.h>
int main()
{ 
   int a[10]={0},n=0,l=0,i,b[10]={1,1,1,1,1,1,1,1,1,1},t=0,t1=0;
   printf("��������\n");
   scanf("%d",&n);
   for(int j=1;j<10;j++)
      for(int f=0;f<j;f++)
          b[j]=b[j]*10;
   for(i=1;i<10;i++) 
       if(n/b[i-1]<1){l=i-1;break;} 
   printf("%dλ��\n",l);
   if(l<3)exit(0);
   for(i=2;i<l+2;i++)
       a[i]=n%b[i-1]/b[i-2];
   for(i=2;i<l+2;i++)
      { t1=a[i];
        for(int j=1;j<l;j++)
            a[i]=a[i]*t1;
        t=t+a[i];
      }
   if(t==n)printf("��\n");
   else printf("����\n");
   system("pause");
}

