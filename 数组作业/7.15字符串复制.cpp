/*�ַ�������
��дһ�����򣬽��ַ���s2�е�ȫ���ַ����Ƶ��ַ���s1�У�����strcpy����������ʱ'\0'ҲҪ
���ƹ�ȥ��'\0'������ַ������ơ�*/ 
#include<stdio.h>
#include<stdlib.h>

int main()
{
   char a[10000]={'\0'},b[10000]={'\0'};
   int i; 
   gets(a);
   for(i=0;a[i]!='\0';i++)
       b[i]=a[i];
   b[i]='\0';  
   printf("%s",b);
   system("pause");
   return 0;
}
