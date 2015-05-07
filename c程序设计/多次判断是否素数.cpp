#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double a;
    int n,t,i;
    long int c;
    for(i=0;i<=1000;i++)
    {printf("请输入用于判断的数字，输入任意非数字结束程序：");
         t=0;
         scanf("%lf",&a);
         c=a/1;
          if(c>1.0&&c==a)
         {for(n=2;n<(sqrt(a)+1);n++)
            {
              if(c%n==0){t=1;break;}                
            }
         if(t==1)printf("不是素数\n");
         else printf("是素数\n"); 
        }
        else {printf("用于判断的数必须为大于1的整数\n");a=0; }
    }
    
    return 0;
}
