#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c,e;
    float d,t,s;
    printf("请输入三角形的三边a,b,c\n");
    scanf("%d,%d,%d",&a,&b,&c);
    
    d=a+b+c;
    t=d/2;
    s=sqrt(t*(t-a)*(t-b)*(t-c));
    e=a+b+c;
    printf("三角形面积为%f\n三角形周长为%d\n",s,e);
        
    system("pause");
    return 0;
}
