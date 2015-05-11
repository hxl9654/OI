#include<stdio.h>
char map1[10][8][8]={'\0'};
int p[10][2]={0};
int dfs(int way , int n)
{
    int i,j;
    if(n==10)return 1;
    if(way==1)
    {
        p[n][0]=p[n-1][0]+1;
        p[n][1]=p[n-1][1]-1;
    }
    else if(way==2)
        p[n][0]=p[n-1][0]+1;
    else if(way==3)
    {
        p[n][0]=p[n-1][0]+1;
        p[n][1]=p[n-1][1]+1;
    }
    else if(way==4)
        p[n][1]=p[n-1][1]-1;
    else if(way==5);
    else if(way==6)
        p[n][1]=p[n-1][1]+1;
    else if(way==7)
    {
        p[n][0]=p[n-1][0]-1;
        p[n][1]=p[n-1][1]-1;
    }
    else if(way==8)
        p[n][0]=p[n-1][0]-1;
    else if(way==9)
    {
        p[n][0]=p[n-1][0]-1;
        p[n][1]=p[n-1][1]+1;
    }
    if(n!=0)
    {
        if(p[n][0]<0||p[n][0]>7||p[n][1]<0||p[n][1]>7)return 0;
        if(map1[n-1][p[n][0]][p[n][1]]=='S')return 0;

        for(i=0;i<8-n;i++)
        {
            for(j=0;j<8;j++)
            {
                map1[n][i][j]=map1[n-1][i+1][j];
                //printf("%c",map1[n][i][j]);
            }
            //printf("\n");
        }


        if(map1[n][p[n][0]][p[n][1]]=='S')return 0;
    }
    //printf("%d %d: %d %d\n",n,way,p[n][0],p[n][1]);
    if(dfs(1,n+1))return 1;
    if(dfs(2,n+1))return 1;
    if(dfs(3,n+1))return 1;
    if(dfs(4,n+1))return 1;
    if(dfs(5,n+1))return 1;
    if(dfs(6,n+1))return 1;
    if(dfs(7,n+1))return 1;
    if(dfs(8,n+1))return 1;
    if(dfs(9,n+1))return 1;
    return 0;
}
int main()
{
    int i,j;
    char map[8][8]={'\0'};
    for(i=7;i>=0;i--)
        {
            for(j=0;j<8;j++)
            {
                scanf("%c",&map[i][j]);
                map1[0][i][j]=map[i][j];
            }
            getchar();
        }
    if(dfs(0,0))printf("WIN");
    else printf("LOSE");
    return 0;
}

