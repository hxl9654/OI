#include<stdio.h>
int main()
{
    freopen("in.txt","w",stdout);
    printf("100000\n");
    for(int i=1;i<=100000;i++)
        printf("%d %d\n",i,i);
    return 0;
}
