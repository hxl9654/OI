#include<stdio.h>
int main()
{
    int n,x,a=0,i,t,ans;
    scanf("%d%d",&n,&x);
    for(i=0;i<n;i++)
    {
        scanf("%d",&t);
        a+=t;
    }
    if(a<0)a=-a;
    ans=a/x;
    if(a%x!=0)ans++;
    printf("%d",ans);
    return 0;
}

