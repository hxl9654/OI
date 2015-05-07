#include<stdio.h>
#include<stdlib.h>
int a[26][2]={0},b[30001]={0};
int main()
{
    int n,m,i,j;    
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;i++)
        scanf("%d%d",&a[i][0],&a[i][1]);
    for(i=1;i<=m;i++)
        for(j=n;j>=0;j--)
            {
              if(j>=a[i][0]&&b[j]<b[j-a[i][0]]+a[i][0]*a[i][1])
                  b[j]=b[j-a[i][0]]+a[i][0]*a[i][1];
              //printf("%d %d %d\n",i,j,b[i][j]);
            }
    printf("%d",b[n]);
    system("pause");
    return 0;    
}
