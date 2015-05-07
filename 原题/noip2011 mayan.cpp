#include<stdio.h>
#include<stdlib.h>
int map[6][8][5]={0},n,a=0;
void cheak(int x,int y)"Î´Íê£¡£¡£¡£¡"
{
    int last=-1,now=0;
    for(i=0;i<8;i++)
        {
            if(i==0){last=map[x][i][a];now++;}
            else if(map[x][i][a]==last)now++;
            else if(now>=3)""
            else {last=map[x][i][a];now=1;}        
        } 
    now=0;
    for(i=0;i<6;i++)
        {
            if(i==0){last=map[x][i][a];now++;}
            else if(map[x][i][a]==last)now++;
            else if(now>=3)""
            else {last=map[x][i][a];now=1;}        
        } 
}
void dfs(int x,int y)
{
    int t,i,j;
    a++;
    if(a>n){a--;return ;}
    for(i=0;i<6;i++)
        for(j=0;j<8;j++)
            map[i][j][x]=map[i][j][x-1];
    t=map[x][y][a];
    map[x][y][a]=map[x+1][y][a];
    map[x+1][y][a]=t;
    cheak(x,y);
    for(i=0;i<n-1;i++)
       for(j=0;j<n;j++)
           if(map[i][j][0]!=map[i+1][j][0])dfs(i,j);
    a--;
    return ;
}
int main()
{
    int i,j,t;
    for(i=0;i<5;i++)
        for(j=0;j<7;j++)
            {
                scanf("%d",&map[i][j][0]);
                if(map[i][j]==0)break;
            }
    for(i=0;i<n-1;i++)
       for(j=0;j<n;j++)
           if(map[i][j][0]!=map[i+1][j][0])dfs(i,j);
    system("pause");
    return 0;
}
