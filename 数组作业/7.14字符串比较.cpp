/*�ַ����Ƚ�:
��һ�����򣬽������ַ���s1��s2���бȽϣ����s1>s2�����һ�������������s2=s1,���0��
���s1<s2,���һ����������Ҫ��strcmp�����������ַ�����gets�������롣������������ľ���ֵ
Ӧ����Ƚϵ������ַ������Ӧ�ַ���ascll��Ĳ�ֵ�����磬'A'��'C'��ȣ�'A'<'C'��Ӧ�������
������'A'�롯C����acsll��ֵΪ2����ˣ�Ӧ���-2.ͬ��'Aid'��'And'�Ƚϣ����ݵ�2���ַ��ıȽ�
�����'i'��'n'С5�����Ӧ���-5*/ 
#include<stdio.h>
#include<stdlib.h>
int main()
{
     int i,out=0;
     char a[1000]={'\0'},b[1000]={'\0'};
     printf("�������һ���ַ���\n");
     gets(a);  
     printf("������ڶ����ַ���\n");
     gets(b);  
     if(sizeof(a)>sizeof(b))i=sizeof(b);
     else i=sizeof(a);
     for(int j=0;j<i;j++)
         if(a[j]-b[j]!=0){out=a[j]-b[j];break;}
     printf("%d",out);
     system("pause");
     return 0;
        
}
