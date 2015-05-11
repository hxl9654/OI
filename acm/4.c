#include<stdio.h>
int main()
{
    int inf[200]={0},n,m,i,t;
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&t);
        inf[t-1]=1;
    }
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&t);
        inf[t-1]=1;
    }
    for(i=0;i<n;i++)
    {
        if(inf[i]!=1)
        {
            printf("Oh, my keyboard!");
            return 0;
        }
    }
    printf("I become the guy.");
    return 0;
}
