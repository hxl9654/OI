//"	【程序3】
//"	题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
//"	.程序分析：在10万以内判断，先将该数加上100后再开方，再将该数加上268后再开方，如果开方后的结果满足如下条件，即是结果。


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    long int i,c,d;
    float a,b;
    
    for(i=1;i<=100000;i++)
    {
      a=sqrt(i+100);
      b=sqrt(i+268);
      c=a/1;
      d=b/1;
      if(a==c&&b==d){printf("结果是%ld\n",i);}                    
    }
    
    system("pause");
    return 0;
}

