/*ͳ�Ƶ��ʸ����� 
����һ���ַ���ͳ�������ж��ٸ����ʣ�����֮����һ�������ո�ֿ���������ͷ����'\0*'����*/ 
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n=0,t=0;
    char a[50]={'\0'};
    for(;;)
      {
         t=scanf("%s",a);
         if(t!=0)n++;
         else break;
         if(getchar()=='\n')break;
      }
    printf("%d\n",n);
    system("pause");
    return 0;
    
}
