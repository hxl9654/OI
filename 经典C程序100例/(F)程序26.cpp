//������26��
//��Ŀ�����õݹ鷽����5!��
//����������ݹ鹫ʽ��fn=fn_1*4!
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int slove(int,int);
int main()
{
  printf("%d",slove(5,0));
  system("pause");
  return 0;
}
int slove(int a,int b)
{   
    printf("%d %d\n",a,b);
    b=b+a;
    a--;
    if(a>0)slove(a,b);
    else return b;
}
