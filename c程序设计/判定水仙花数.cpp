#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c,d;
    
    printf("请输入一个三位数\n");
    scanf("%d",&a);
    b=a/100;
    c=a/10%10;
    d=a%10;
    if(a==b*b*b+c*c*c+d*d*d) printf("原数字是水仙花数\n");
    else printf("原数字不是水仙花数\n");
    
    system("pause");
    return 0;
}
