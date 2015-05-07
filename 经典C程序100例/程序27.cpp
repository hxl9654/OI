//【程序27】
//题目：利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。
//程序分析：


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
