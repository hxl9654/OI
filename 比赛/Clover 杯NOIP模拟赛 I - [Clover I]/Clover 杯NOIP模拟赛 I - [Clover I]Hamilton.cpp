//Ã»¹ý 
#include<stdio.h>
#include<stdlib.h>
int way[20][20]={0},wa[100]={0},out=0,j=0;
int find(int x)
{
     int i,flag=0;
     for(i=0;i<j;i++)
         if(wa[i]==x){flag=1;break;}
     j=i;
     printf("f%d\n",flag);
     return flag;
}
void bfs(int x)
{
     if(find(x)==1){printf("e%d ",x);out++;return ;}
     wa[j]=x;printf("%d ",x);
     j++;
     if(way[x][0]!=0)bfs(0);
     if(way[x][1]!=0)bfs(1);
     if(way[x][2]!=0)bfs(2);
     if(way[x][3]!=0)bfs(3);
     if(way[x][4]!=0)bfs(4);
     if(way[x][5]!=0)bfs(5);
     if(way[x][6]!=0)bfs(6);
     if(way[x][7]!=0)bfs(7);
     if(way[x][8]!=0)bfs(8);
     if(way[x][9]!=0)bfs(9);
     if(way[x][10]!=0)bfs(10);
     if(way[x][11]!=0)bfs(11);
     if(way[x][12]!=0)bfs(12);
     if(way[x][13]!=0)bfs(13);
     if(way[x][14]!=0)bfs(14);
     if(way[x][15]!=0)bfs(15);
     if(way[x][16]!=0)bfs(16);
     if(way[x][17]!=0)bfs(17);
     if(way[x][18]!=0)bfs(18);
     if(way[x][19]!=0)bfs(19);
}
int main()
{
    int n,m,i,a,b;
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++)
        {
             scanf("%d%d",&a,&b);
             way[a-1][b-1]=1;
        }
    bfs(0);
    printf("%d\n",out);
    system("pause");
    return 0;
}
