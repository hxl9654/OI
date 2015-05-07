#include<stdio.h>
#include<stdlib.h>
int n,w[6010]={0},root,d[6010][2]={0};
short f[6010][6010]={0};
void slove(int x,int y)
{//printf("!!%d %d\n",x,y);
    int fl=0,i,t=0;
    if(y==0)
      for(i=1;i<=n;i++)
         if(f[x][i]==2)
           {
                 if(d[i][0]==0)slove(i,0);
                 if(d[i][1]==0)slove(i,1);
                 t=t+(d[i][0]>d[i][1]?d[i][0]:d[i][1]);
                 fl=1;
           }
         else ;
    else if(y==1)
       {
         for(i=1;i<=n;i++)
           if(f[x][i]==2)
             {
                 if(d[i][0]==0)slove(i,0);
                 t=t+d[i][0];
                 fl=1;
             }
           t=t+w[x];
       }

    //printf("...%d %d %d\n",x,y,fl);
    if(fl==0){t=w[x];y=1;}
    d[x][y]=t;
    //printf("%d %d\n",x,y);
        //for(i=1;i<=n;i++)
      // printf("%d %d %d\n",i,d[i][0],d[i][1]);
       //printf("\n");
    return ;
}
int main()
{
    int i,j,t1,t2,ans,fl;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       scanf("%d",&w[i]);
    for(i=1;i<n;i++)
       {
           scanf("%d%d",&t1,&t2);
           f[t1][t2]=1;
           f[t2][t1]=2;
       }
    for(i=1;i<=n;i++)
      {
         fl=0;
         for(j=i;j<=n;j++)
            if(f[i][j]==1){fl=1;break;}
         if(fl==0){root=i;break;}
      }
    slove(root,0);
    slove(root,1);
    ans=(d[root][1])>d[root][0]?(d[root][1]):d[root][0];
    printf("%d\n",ans);
    //for(i=1;i<=n;i++)
    //   printf("%d %d %d\n",i,d[i][0],d[i][1]);
    //printf("\n");
    //for(i=1;i<=n;i++)printf("w%d %d\n",i,w[i]);
    //printf("%d",root);
    system("pause");
    return 0;
}
