//"	【程序8】
//"	题目：输出9*9口诀。
//"	.程序分析：分行与列考虑，共9行9列，i控制行，j控制列。


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c;
    for(a=1;a<10;a++)
   {    for(b=1;b<10;b++)
         {
           c=a*b;
            printf("%d×%d=%2d ",a,b,c);
         }
    printf("\n");
   }
  
    
    
    system("pause");
    return 0;
}
