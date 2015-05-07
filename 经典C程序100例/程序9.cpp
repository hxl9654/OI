//"	【程序9】
//"	题目：要求输出国际象棋棋盘。
//"	.程序分析：用i控制行，j来控制列，根据i+j的和的变化来控制输出黑方格，还是白方格。


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
   int i,j;
   for(i=1;i<9;i++)
     {
      for(j=1;j<9;j++)
       {
        if((i%2!=0&&j%2!=0)||(i%2==0&&j%2==0))printf("□");  
        else printf("■");
        if(j==8)printf("\n");              
       }
     }
    system("pause");
    return 0;
}

