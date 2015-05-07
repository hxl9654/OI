#include<stdio.h>
#include<stdlib.h>
int n,k,a,b,inf[1000]={0},nu=0;
long long now=0,best=-999999999,max=0;
void dfs(int x)
{
     if(x==-1)
         {
              if(nu>=a&&nu<=b)
                  if(now-max+now>best)best=now-max+now;
              return ;
         }
     nu++;
     now=now+inf[x];
     dfs(x-1);
     now=now-inf[x];
     nu--;
     dfs(x-1);
}
int main()
{
    int i;
    scanf("%d%d%d%d",&n,&k,&a,&b);
    if(a!=0||b!=k)
         {
              printf("0\n");
              system("pause");
              return 0;          
         }
    for(i=0;i<n;i++)
        max=max+inf[i];
    for(i=0;i<n;i++)
        scanf("%d",&inf[i]);
    dfs(n-1);
    printf("%lld\n",best);
    system("pause");
    return 0;
}
