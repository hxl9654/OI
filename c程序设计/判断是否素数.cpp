#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,n,t;
    t=0;
    scanf("%d",&a);
    if(a>1)
    {
     for(n=2;n<(sqrt(a)+1);n++)
     {
      if(a%n==0){t=1;break;}                
     }
     if(t==1)printf("不是素数\n");
     else printf("是素数\n"); 
    }
    else printf("用于判断的数必须为大于1的整数\n");
    
    system("pause");
    return 0;
}
