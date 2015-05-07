/*统计单词个数： 
输入一行字符，统计其中有多少个单词，单词之间用一个或多个空格分开（包括开头），'\0*'结束*/ 
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
