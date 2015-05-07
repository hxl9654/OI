#include<stdio.h>
#include<stdlib.h>
char map[501][501]={0};
int k,n,m;
int cheak(int x1,int y1,int x2,int y2)
{
    int i,j,temp=0;
    for(i=x1+1;i<x2;i++)
        for(j=y1+1;j<y2;j++)
            if(map[i][j]=='*'&&map[i-1][j]=='*'&&map[i+1][j]=='*'&&map[i][j-1]=='*'&&map[i][j+1]=='*'){temp++;if(temp>=k)return 1;}
    if(temp>=k)return 1;
    else return 0;
}
int main()
{
    int x1,y1,x2,y2,out=0,i;
    scanf("%d%d%d",&n,&m,&k);
    for(i=0;i<n;i++)
        scanf("%s",map[i]);    
    for(x1=0;x1<n;x1++)
        for(y1=0;y1<m;y1++)
            for(x2=x1;x2<n;x2++) 
                for(y2=y1;y2<m;y2++) 
                    out=out+cheak(x1,y1,x2,y2);
    printf("%d\n",out);
    system("pause");
    return 0;
}
