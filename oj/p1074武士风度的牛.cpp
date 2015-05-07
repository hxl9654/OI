#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char a[200][200]={0};
int l,w,b[40000][2]={0},visit[200][200]={0};
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    memset(visit,0,sizeof(visit));
    memset(b,0,sizeof(b));
    memset(a,0,sizeof(a));
    int i,j,k;
    scanf("%d%d",&l,&w);
    for(i=w-1;i>=0;i--)
       scanf("%s",a[i]);
    for(i=0;i<w;i++)
       for(j=0;j<l;j++)
           if(a[i][j]=='K'){b[0][0]=j;b[0][1]=i;visit[j][i]=1;break;}
    j=0;
    k=2;
    b[1][0]=-1234;
    for(i=0;;j++)
       {
           if(b[j][0]==-1234)
               {
                   b[k][0]=-1234;
                   k++;
                   j++;
                   i++;
                   if(k==j)break;
                   continue;
               }
           if(b[j][0]>0&&b[j][1]<l-2&&visit[b[j][0]-1][b[j][1]+2]==0&&(a[b[j][0]-1][b[j][1]+2]=='H'||a[b[j][0]-1][b[j][1]+2]=='.'))
                if(a[b[j][0]-1][b[j][1]+2]=='H')break;
                else {b[k][0]=b[j][0]-1;b[k][1]=b[j][1]+2;k++;visit[b[j][0]-1][b[j][1]+2]=1;}
           if(b[j][0]>1&&b[j][1]<l-1&&visit[b[j][0]-2][b[j][1]+1]==0&&(a[b[j][0]-1][b[j][1]+1]=='H'||a[b[j][0]-1][b[j][1]+1]=='.'))
                if(a[b[j][0]-2][b[j][1]+1]=='H')break;
                else {b[k][0]=b[j][0]-2;b[k][1]=b[j][1]+1;k++;visit[b[j][0]-2][b[j][1]+1]=1;}
           if(b[j][0]>1&&b[j][1]>0&&visit[b[j][0]-2][b[j][1]-1]==0&&(a[b[j][0]-2][b[j][1]-1]=='H'||a[b[j][0]-2][b[j][1]-1]=='.'))
                if(a[b[j][0]-2][b[j][1]-1]=='H')break;
                else {b[k][0]=b[j][0]-2;b[k][1]=b[j][1]-1;k++;visit[b[j][0]-2][b[j][1]-1]=1;}
           if(b[j][0]>0&&b[j][1]>1&&visit[b[j][0]-1][b[j][1]-2]==0&&(a[b[j][0]-1][b[j][1]-2]=='H'||a[b[j][0]-1][b[j][1]-2]=='.'))
                if(a[b[j][0]-1][b[j][1]-2]=='H')break;
                else {b[k][0]=b[j][0]-1;b[k][1]=b[j][1]-2;k++;visit[b[j][0]-1][b[j][1]-2]=1;}
           if(b[j][0]<w-1&&b[j][1]>1&&visit[b[j][0]+1][b[j][1]-2]==0&&(a[b[j][0]+1][b[j][1]-2]=='H'||a[b[j][0]+1][b[j][1]-2]=='.'))
                if(a[b[j][0]+1][b[j][1]-2]=='H')break;
                else {b[k][0]=b[j][0]+1;b[k][1]=b[j][1]-2;k++;visit[b[j][0]+1][b[j][1]-2]=1;}
           if(b[j][0]<w-2&&b[j][1]>0&&visit[b[j][0]+2][b[j][1]-1]==0&&(a[b[j][0]+2][b[j][1]-1]=='H'||a[b[j][0]+2][b[j][1]-1]=='.'))
                if(a[b[j][0]+2][b[j][1]-1]=='H')break;
                else {b[k][0]=b[j][0]+2;b[k][1]=b[j][1]-1;k++;visit[b[j][0]+2][b[j][1]-1]=1;}
           if(b[j][0]<w-2&&b[j][1]<l-1&&visit[b[j][0]+2][b[j][1]+1]==0&&(a[b[j][0]+2][b[j][1]+1]=='H'||a[b[j][0]+2][b[j][1]+1]=='.'))
                if(a[b[j][0]+2][b[j][1]+1]=='H')break;
                else {b[k][0]=b[j][0]+2;b[k][1]=b[j][1]+1;k++;visit[b[j][0]+2][b[j][1]+1]=1;}
           if(b[j][0]<w-1&&b[j][1]<l-2&&visit[b[j][0]+1][b[j][1]+2]==0&&(a[b[j][0]+1][b[j][1]+2]=='H'||a[b[j][0]+1][b[j][1]+2]=='.'))
                if(a[b[j][0]+1][b[j][1]+2]=='H')break;
                else {b[k][0]=b[j][0]+1;b[k][1]=b[j][1]+2;k++;visit[b[j][0]+1][b[j][1]+2]=1;}
       }
    printf("%d\n",i+1);
    for(i=0;(b[i][0]!=0||b[i][1]!=0)||(b[i+1][0]!=0||b[i+1][1]!=0);i++)
       printf("%d %d\n",b[i][0],b[i][1]);
    for(i=w-1;i>=0;i--)
       printf("%s\n",a[i]);
    system("pause");
    return 0;
}
