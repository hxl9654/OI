#include<stdio.h>
int main()
{
    int n,a[200]={0},i,ans=0,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        if(a[i]==1)ans++;
        else flag=1;
    if(flag==1)printf("%d",ans+1);
    else printf("%d",ans-1);
    return 0;
}
