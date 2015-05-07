#include<stdio.h>
#include<stdlib.h>
int a[2510]={0},inf[2510][2510]={0},b[5001]={0},p[2510]={0},n,m,ts,te,i=1,j=0,k,t;
int main()
{
    int t1,t2,t3,k;
    scanf("%d%d%d%d",&n,&m,&ts,&te);
    for(k=1;k<=m;k++)
       {
          scanf("%d%d%d",&t1,&t2,&t3);
          if(inf[t1][t2]>t3||inf[t1][t2]==0)inf[t1][t2]=t3;
          if(inf[t2][t1]>t3||inf[t2][t1]==0)inf[t2][t1]=t3;
       }
    for(k=1;k<=n;k++)
       {
          a[k]=199999999;
       }
    a[ts]=0;
    b[0]=ts;
    p[b[i]]=1;
    for(;i>j;)
        {
            t=b[j];
            j++;
            p[t]=0;
            for(k=1;k<=m;k++)
                if(inf[t][k]!=0&&inf[t][k]+a[t]<a[k])
                   {
                        a[k]=inf[t][k]+a[t];
                        if(p[k]==0)
                           {
                               p[k]=1;
                               b[i]=k;
                               i++;
                               //printf("k%d ",k);
                           }
                   }
        }
    //printf("ij%d %d\n",i,j);
    //for(k=1;k<=n;k++)
    printf("%d\n",a[te]);
    system("pause");
    return 0;
}
