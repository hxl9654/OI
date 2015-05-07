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


/*
20 43 11 19
8 14 569
17 13 859
11 14 571
18 14 583
14 5 569
9 1 342
14 6 397
14 17 640
12 1 331
19 12 999
16 1 203
19 6 493
9 14 645
7 4 118
15 6 218
15 20 164
13 16 737
1 15 548
1 17 478
4 15 286
4 17 964
12 14 165
15 7 759
1 5 976
19 11 491
15 11 286
14 1 889
10 17 852
15 16 6
20 3 563
12 7 538
11 2 29
1 13 903
12 10 29
14 3 633
12 5 142
1 11 137
13 18 910
16 5 411
19 8 388
13 20 647
16 20 447
2 13 888
Êä³ö 491
*/
/*
10 20 9 4
5 6 308
8 10 696
4 2 569
8 6 471
1 2 874
5 3 130
4 5 804
8 9 89
10 4 717
10 9 41
7 6 998
1 6 639
7 9 650
7 8 339
3 1 597
9 1 622
7 10 2
5 1 4
1 4 372
1 10 163
out:576
*/
