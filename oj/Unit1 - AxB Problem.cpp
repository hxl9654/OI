#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long a,b,c,n=0;
    scanf("%I64d%I64d",&a,&b);
    c=a*b;
    for(n=0;c!=0;n++)c=c/10;
    printf("%d\n",n);
    system("pause");
    return 0;
}
