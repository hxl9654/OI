//【程序21】
//题目：猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个
//第二天早上又将剩下的桃子吃掉一半，又多吃了一个。以后每天早上都吃了前一天剩下的
//一半零一个。到第10天早上想再吃时，见只剩下一个桃子了。求第一天共摘了多少。
//程序分析：采取逆向思维的方法，从后往前推断。

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
  int n=1;
  for(int i=1;i<10;i++)
      n=(n+1)*2;
  printf("%d\n",n);
  system("pause");
  return 0;  
}
