#include<stdio.h>
#include<stdlib.h>
int n,m;
char a[50][80]={0};
int serch(int x,int y)
{
    if(a[x][y]!=0)a[x][y]=0;
    else return 0;
    if(y+1<n)serch(x,y+1);
    if(x+1<m)serch(x+1,y);
    if(x-1>=0)serch(x-1,y);
    if(y-1>=0)serch(x,y-1); 
    return 1;
}
int main()
{
    int i,j,out=0;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
        scanf("%s",a[i]);
    for(i=0;i<m;i++)
         for(j=0;j<n;j++)
             if(a[i][j]!=0)a[i][j]=a[i][j]-'0';
    /*for(i=0;i<m;i++)
         {for(j=0;j<n;j++)
             printf("%d ",a[i][j]);printf("\n");}*/
    for(i=0;i<m;i++)
         for(j=0;j<n;j++)
             if(serch(i,j)==1)out++;
    printf("%d\n",out);
    system("pause");
    return 0;
}
