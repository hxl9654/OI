#include<stdlib.h>
#include<stdio.h>
int main()
{
    unsigned long int n,x,f=0;
    scanf("%lld",&n);

    for(x=1;x<n;x++)
        if(((x*x)%n)==1)
            {    
                        if(f==1)printf("\n\r%lld",x);
                        else {printf("%lld",x);f=1;}
            }
    if(f==0)printf("None");

system("pause");

    return 0;
    
}
