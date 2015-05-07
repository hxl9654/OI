#include<stdio.h>
#include<stdlib.h>
int m,n,inf[3001][10800]={0},way[3001][2]={0};
int max(int x)
{
    int i,h=0,h1=0;
    for(i=0;i<=m;i++)
        if(inf[x][i]>h){h=inf[x][i];h1=i;}
    return h1;
}
int serch(int a,int x,int y,int z)
{
    if(x==0)return 0;    //printf("%d %d %d\n",x,y,z);
    if(x==y){inf[x][z]++;return 1;}    
    int flag=0;    
    if(a!=way[x][0])flag=serch(x,way[x][0],y,z);    
    if(flag==0&&a!=way[x][1])flag=serch(x,way[x][1],y,z);    
    if(flag==1){inf[x][z]++;return 1;} 
    else return 0;
}
int main()
{
    int i,t1,t2,t3;
    //int j,k;
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    scanf("%d%d",&n,&m);
    for(i=1;i<n;i++)
       { 
           scanf("%d%d",&t1,&t2);
           if(way[t1][0]==0)way[t1][0]=t2;
           else way[t1][1]=t2;
           if(way[t2][0]==0)way[t2][0]=t1;
           else way[t2][1]=t1;
       }
    for(i=1;i<=m;i++)
       {
           scanf("%d%d%d",&t1,&t2,&t3);    
           serch(0,t1,t2,t3);
           //for(j=1;j<=n;j++)
           //    printf("%d\n",max(j));
           //for(j=1;j<=n;j++){for(k=2;k<=3;k++)
           //    printf("%d ",inf[j][k]);printf("\n");}
           //printf("\n");
           //inf[t1][t3]++;
       }
    for(i=1;i<=n;i++)
        printf("%d\n",max(i));
    //system("pause");
    return 0;
}
