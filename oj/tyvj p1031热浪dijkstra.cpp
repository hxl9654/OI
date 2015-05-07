#include<stdio.h>
#include<stdlib.h>
int a[2510]={0},inf[2510][2510]={0},b[5001]={0},p[2510]={0},n,m,ts,te,min=199999999,i=1,j=0,k,t,tot=1;
void up(int);
void slove(int x)
{
    for(i=1;i<=n;i++)
           if(inf[x][i]!=0&&inf[x][i]+a[x]<a[i]){a[i]=inf[x][i]+a[x];up(p[i]);}
}
void down(int x)
{
    int t;
    if(a[b[x*2]]<a[b[x*2+1]])
       if(a[b[x]]>a[b[x*2]]&&x*2<tot)
          {
              t=b[x];
              b[x]=b[x*2];
              b[x*2]=t;
              p[b[x]]=x;
              p[b[x*2]]=x*2;
              down(x*2);
          }
       else ;
    else if(a[b[x]]>a[b[x*2+1]]&&x*2<tot-1)
          {
              t=b[x];
              b[x]=b[x*2+1];
              b[x*2+1]=t;
              p[b[x]]=x;
              p[b[x*2+1]]=x*2+1;
              down(x*2+1);
          }
    return ;
}
void up(int x)
{
    int t;
    if(a[b[x]]<a[b[x/2]]&&x>1)
       {
            t=b[x];
            b[x]=b[x/2];
            b[x/2]=t;
            p[b[x]]=x;
            p[b[x/2]]=x/2;
            up(x/2);
       }
    return ;
}
void out()
{
    int t;
    t=b[1];
    b[1]=b[tot-1];
    tot--;
    p[b[1]]=1;
    p[t]=0;
    down(1);
    slove(t);
    return ;
}
void in(int x)
{
    b[tot]=x;
    p[x]=tot;
    up(tot);
    tot++;
    return ;
}
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
        a[k]=199999999;
    a[ts]=0;
    for(k=1;k<=n;k++)
        in(k);
    for(k=1;k<=n;k++)
        out();
    /*for(i=0;i<n;i++)
       {
           min=199999999;
           for(j=1;j<=n;j++)
               if(p[j]==0&&a[j]<min){min=a[j];t=j;}
           for(j=1;j<=n;j++)
               if(inf[t][j]!=0&&inf[t][j]+a[t]<a[j])a[j]=inf[t][j]+a[t];
           p[t]=1;
       }*/
    printf("%d\n",a[te]);
    system("pause");
    return 0;
}

