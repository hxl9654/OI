#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int n,m,w,r;
long long map[20][5]={0},way[11][2]={0};
char dic[10][10]={0},pro[11][20]={0},temp[20]={0},prob[10][10];
int che(long long x,long long y,long long z,long long a)
{
    double tem;
    tem=abs(x*way[a][0]+y*way[a][1]+z)/sqrt(x*x+y*y);
    if(tem<=r)return 1;
    else return 0;
}
int cheak(long long x,long long y)
{
    long long a,b,c;
    if(way[x][0]>map[y][0]&&way[x][0]<map[y][2]&&way[x][1]>map[y][1]&&way[x][1]<map[y][3])return 1;
    a=0;
    b=map[y][2]-map[y][0];
    c=map[y][1]*(map[y][0]-map[y][2]);
    if(che(a,b,c,x)==1)return 1;
    a=map[y][1]-map[y][3];
    b=0;
    c=map[y][2]*(map[y][3]-map[y][1]);
    if(che(a,b,c,x)==1)return 1;
    a=0;
    b=map[y][2]-map[y][0];
    c=map[y][3]*(map[y][0]-map[y][2]);
    if(che(a,b,c,x)==1)return 1;
    a=map[y][1]-map[y][3];
    b=0;
    c=map[y][0]*(map[y][3]-map[y][1]);
    if(che(a,b,c,x)==1)return 1;
    return 0;
}
int main()
{
     freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int i,j,k=0,flag=0,out=0,t;
    scanf("%d%d%d%d",&n,&m,&w,&r);
    m++;
    for(i=0;i<n;i++)
        scanf("%I64d%I64d%I64d%I64d%c%c",&map[i][0],&map[i][1],&map[i][2],&map[i][3],&t,&map[i][4]);
    for(i=0;i<m;i++)
        scanf("%I64d%I64d",&way[i][0],&way[i][1]);
    for(i=0;i<w;i++)
        scanf("%s",dic[i]);
    for(i=0;i<m;i++)
        for(j=0,k=0;j<n;j++)
            if(cheak(i,j)==1){pro[i][k]=map[j][4];k++;}
    /*for(i=0;i<10;i++)
        {for(j=0;j<20;j++)
            printf("%c ",pro[i][j]);printf("\n");}*/
    for(i=0;i<m;i++)
        for(j=0;j<w;j++)
            {
               for(flag=0,k=0;pro[i][k]!=0;k++)
                   if(pro[i][k]==dic[j][i])flag=1;
               if(flag==0)dic[j][0]=0;
            }
    for(i=0;i<w;i++)
        if(dic[i][0]!=0)
              {strcpy(prob[i],dic[i]);}
    pro[i][0]=0;
    for(i=0;pro[i][0]!=0;i++)
        for(j=0;j<n-2;j++)
            if(strcmp(prob[j+1],prob[j])<0)
               {
                   strcpy(temp,prob[j+1]);
                   strcpy(prob[j+1],prob[j]);
                   strcpy(prob[j],temp);            
               }
    for(i=0;i<10;i++)
        if(prob[i][0]!=0)out++;
    printf("%d\n",out);
    for(i=0;i<10;i++)
        if(prob[i][0]!=0)printf("%s\n",prob[i]);
    return 0;
}
