#include<stdio.h>
#include<stdlib.h>
int n,k,p,inf[200000][2]={0},flag=0,ans=0;
int main()
{freopen("hotel.in","r",stdin);
freopen("hotel.out","w",stdout);
    int i,j,k,t;
    scanf("%d%d%d",&n,&k,&p);
    for(i=0;i<n;i++)
        scanf("%d%d",&inf[i][0],&inf[i][1]);
    for(i=0;i<n-1;i++)
        {
           t=inf[i][0];
           if(inf[i][1]<=p)
               {
                  for(j=i+1;j<n;j++)                              
                      if(inf[j][0]==t)ans++;
               }
           else for(j=i+1;j<n;j++)
               {
                  if(inf[j][1]<=p)
                      {
                          flag=1;
                          for(;j<n;j++)                              
                              if(inf[j][0]==t)ans++;
                          break;
                      }
                   // printf("%d %d %d %d\n",i,j,flag,ans);
               }
            flag=0;
        }
    printf("%d\n",ans);
    //system("pause");
    return 0;
}
