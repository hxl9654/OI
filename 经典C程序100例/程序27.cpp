//������27��
//��Ŀ�����õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ������
//���������


#include<stdio.h>
#include<stdlib.h>

char a[5];
void slove(int);
int main()
{
  
  for(int i=0;i<5;i++)
      a[i]=getchar();
  slove(4);
  printf("\n");
  system("pause");
  return 0;    
}
void slove(int i)
{
  printf("%c",a[i]);
  i--;
  if(i>=0)slove(i);
  else return;     
}
