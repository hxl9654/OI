#include<stdio.h>
#include<stdlib.h>
char map[100][100]={0};
int n,us[100]={0},o=0;
int cheak(int x,int y)
{
    int i,j;
    for(i=n-x,j=y;i<n&&j<n;i++,j++)
        if(map[i][j]=='*')return 0;
    for(i=n-x,j=y;i>=0&&j>=0;i--,j--)
        if(map[i][j]=='*')return 0;
    for(i=n-x,j=y;i<n&&j>=0;i++,j--)
        if(map[i][j]=='*')return 0;
    for(i=n-x,j=y;i>=0&&j<n;i--,j++)
        if(map[i][j]=='*')return 0;
    return 1;
}
void dfs(int x)
{
    if(x==0)
      {
          int i,j;
          //for(i=0;i<n;i++)printf("%s\n",map[i]);
          for(i=0;i<n;i++)
              for(j=0;j<n;j++)
                  if(map[i][j]=='*')printf("%d",j+1);
          printf("\n");
          o++;
          return ;  
      } 
    for(int i=0;i<n;i++)
          if(us[i]==0&&cheak(x,i)){us[i]=1;map[n-x][i]='*';dfs(x-1);us[i]=0;map[n-x][i]='_';}  
    return ;
}
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
       for(int j=0;j<n;j++)
           map[i][j]='_';
    dfs(n);
    printf("%d\n",o);
    system("pause");
    return 0;
}
