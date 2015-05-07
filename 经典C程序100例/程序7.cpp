//"	【程序7】
//"	题目：输出特殊图案，请在c环境中运行，看一看，Very Beautiful!
//"	.程序分析：字符共有256个。不同字符，图形不一样。　　　

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
   int a;
   for(a=1;a<257;a++)
   {
     printf("%c",a);                
   }
    
    system("pause");
    return 0;
}

