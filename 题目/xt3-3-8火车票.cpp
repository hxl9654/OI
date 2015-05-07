/*一条铁路线上有20个车站，问应该准备多少种车票*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=20,n=0;
    for(;i>0;i--)
        n=n+i;
    printf("%d",n);
    system("pause");
    return 0;
                    
}
