#include<stdio.h>
#include<stdlib.h>
short way[10000][5000]={0},b[10000]={0},flag=0;
int cheak(int x)
{
    for(int i=0;b[i]!=0;i++)
        if(b[i]==x)return 0;
    return 1;
}
void dfs(int x,int y,int z)
{
    int i,j;
    if(flag==2)return ;
    if(x==y)
        if(flag==0)flag=1;
        else {printf("N\n");flag=2;}
    for(j=0;way[x][j]!=0&&j<5000;j++)
        {
            if(way[x][j]!=0&&cheak(way[x][j])==1){b[z]=way[x][j];dfs(way[x][j],y,z+1);}
            if(flag==2)return ;
        }     
}
int main()
{
    int n,m,q,i,j,t1,t2;
    scanf("%d%d%d",&n,&m,&q);
    for(i=0;i<m;i++)
        {
            scanf("%d%d",&t1,&t2);
            for(j=0;j<5000;j++)
                if(way[t1-1][j]==0){way[t1-1][j]=t2-1;break;}
            for(j=0;j<5000;j++)
                if(way[t2-1][j]==0){way[t2-1][j]=t1-1;break;}
        }
    for(i=0;i<q;i++)
        {   
            flag=0;
            scanf("%d%d",&t1,&t2);
            dfs(t1-1,t2-1,0);  
            if(flag==0)printf("N\n");
            if(flag==1)printf("Y\n");
        }
    system("pause");
    return 0; 
}
