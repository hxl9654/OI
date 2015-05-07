#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int n1()
{
    double a,b,x;
    scanf ("%lf%lf",&a,&b);
    x=-(a/b);
    printf("1 %.5lf\n",x);
    return 0;    
}
int main()
{
    int t;
    scanf("%d",&t);
    if(t==1)n1();
    else printf("0\n");
    system("pause");
    return 0;
}
