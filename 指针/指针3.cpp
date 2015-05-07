#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,t;
    int *pa=&a,*pb=&b;
    scanf("%d%d",pa,pb);
    if(*pb>*pa){t=*pa;*pa=*pb;*pb=t;}
    printf("%d %d",a,b);
    system("pause");
    return 0;
}
