#include<stdio.h>
#include<stdlib.h>
//char map[100][100]={0};
int n,us[100]={0},k=0,ha1[40]={0},ha2[40]={0};
/*int cheak(int x,int y)
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
int cheak(int x,int y)
{
    int i,j;
    for(i=x,j=y;i<=n&&j<n;i++,j++)
        if(us[j]==i)return 0;
    for(i=x,j=y;i>0&&j>=0;i--,j--)
        if(us[j]==i)return 0;
    for(i=x,j=y;i<=n&&j>=0;i++,j--)
        if(us[j]==i)return 0;
    for(i=x,j=y;i>0&&j<n;i--,j++)
        if(us[j]==i)return 0;
    return 1;
}*/
int cheak(int x,int y)
{
    
}
void dfs(int x)
{
    if(x==0)
      {
          int i,j;
          if(k<3)
            {
                 for(i=n;i>0;i--)
                    for(j=0;j<n;j++)
                      if(us[j]==i)printf("%d ",j+1);
                 printf("\n");
            }
          k++;
          return ;  
      } 
    int i;
    for(i=0;i<n;i++)
        if(ha1[x+i]==0&&ha2[n+x-i]==0&&us[i]==0)
           {us[i]=x;ha2[n+x-i]=1;ha1[x+i]=1;dfs(x-1);us[i]=0;ha2[n+x-i]=0;ha1[x+i]=0;}  
          //if(us[i]==0&&cheak(x,i)){us[i]=x;map[n-x][i]='*';dfs(x-1);us[i]=0;map[n-x][i]='\0';}  
    return ;
}
int main()
{
    int i,j;
    scanf("%d",&n);
    dfs(n);
    printf("%d\n",k);
    system("pause");
    return 0;
}
