//Î´Íê 
#include<stdio.h>
#include<stdlib.h>
int m,n,s,way[40][3][2]={0},slu[40][40]={0},pol[40];
double visit[100000][2]={0,1},ans=0,out=0;
int cheak(int x,int y,int z)
{
    if(way[x][y][0]==0)return 0;
    for(int i=0;i<=z;i++)
        if(visit[i][0]==way[x][y][0])return 0;
    
}
void dfs(int x,int y)
{
    visit[y][0]=x;    
    double a=1,b=1,c=1,d=0;
    if(cheak(x,0,y)==1)d++;
    else a=0;
    if(cheak(x,1,y)==1)d++;
    else b=0;
    if(cheak(x,2,y)==1)d++;
    else c=0;
    if(a==0&&b==0&&c==0)
       {
          ans=0;
          for(int i=0;i<=y;i++)
             ans=ans+visit[i][1]*slu[visit[i][0]][pol[visit[i][0]]];
             out=out>ans?out:ans;
          return ;
       }
    a=a/d*visit[y][1];
    b=d/d*visit[y][1];
    c=d/d*visit[y][1];
    if(a!=0)
      {
         visit[y][1]=a;
         dfs(way[x][0][0],y+1);
      }
    if(b!=0)
      {
         visit[y][1]=b;
         dfs(way[x][1][0],y+1);
      }
    if(c!=0)
      {
         visit[y][1]=c;
         dfs(way[x][2][0],y+1);
      }
}
void police(int x,int y)
{ 
    if(y==n&&s-x!=0)return ;
    if(s-x==0)
      {
          for(j=y+1;j<=n;j++)
              plo[j]=0;
          dfs(1,0);
          out=out>ans?out:ans;
          return;
      }
    for(int i=0;i<=s-x;i++)
       { 
           pol[y+1]=i;
           police(x+i,y+1); 
       }    
}
int main()
{
    int i,j,t1,t2,t3;
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;i++)
       { 
           scanf("%d%d%d",&t1,&t2,&t3);
           if(way[t1][0][0]==0){way[t1][0][0]=t2;way[t1][0][1]=t3;}
           else if(way[t1][1][0]==0){way[t1][1][0]=t2;way[t1][1][1]=t3;}
           else if(way[t1][2][0]==0){way[t1][2][0]=t2;way[t1][2][1]=t3;}
           if(way[t2][0][0]==0){way[t2][0][0]=t1;way[t2][0][1]=t3;}
           else if(way[t2][1][0]==0){way[t2][1][0]=t1;way[t2][1][1]=t3;}
           else if(way[t2][2][0]==0){way[t2][2][0]=t1;way[t2][2][1]=t3;}
       }
    scanf("%d",&s);
    for(i=1;i<=n;i++)
        for(j=1;j<=s;j++)
            scanf("%d",&slu[i][j]);
    for(i=0;i<=s;i++)
        {
             pol[0]=i;
             police(i,1);
        }
    printf("%.4lf",out);
    system("pause");
    return 0;
}
