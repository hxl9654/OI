#include<stdio.h>
#include<stdlib.h>
int a[2510]={0},inf[2510][2510]={0},b[5001]={0},p[2510]={0},n,m,ts,te,min=199999999,i=1,j=0,k,t;
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
    for(i=0;i<n;i++)
       {
           min=199999999;
           for(j=1;j<=n;j++)
               if(p[j]==0&&a[j]<min){min=a[j];t=j;}  
           for(j=1;j<=n;j++)
               if(inf[t][j]!=0&&inf[t][j]+a[t]<a[j])a[j]=inf[t][j]+a[t];      
           p[t]=1; 
       }
    printf("%d\n",a[te]);
    system("pause");
    return 0;
}
