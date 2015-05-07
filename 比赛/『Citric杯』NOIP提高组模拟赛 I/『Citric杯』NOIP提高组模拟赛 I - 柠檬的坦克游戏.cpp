#include<stdio.h>
#include<stdlib.h>
long long inf[100000][3]={0};
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int n,i,j,done=0,flag=1,k=1,a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%I64d%I64d",&inf[i][0],&inf[i][1]);
    for(k=1;k<=n&&done<n;k++)
      {         
         for(i=0;i<n;i++)
            { 
               if(inf[i][2]!=0)continue;
               for(j=0;j<n;j++)
                  {
                     if(i==j||inf[j][2]!=0)continue;
                     if(inf[i][0]<inf[j][0]&&inf[i][1]<inf[j][1]){flag=0;break;}
                     /*printf("%d %d %d:",k,i,j);
                     for(a=0;a<n;a++)
                        printf("%d ",inf[a][2]);
                     printf("\n%d\n",flag);*/
                  }
               if(flag==1){inf[i][2]=k;done++;}
               else flag=1;
               
            }
      }
    for(i=0;i<n;i++)
        printf("%I64d\n",inf[i][2]);
    system("pause");
    return 0;
}
