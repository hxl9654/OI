#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m,n,a[100][500]={0},i,j,b[100][500]={0},c[100][500]={0},out=99999;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(j=0;j<m;j++)
        b[0][j]=a[0][j];
    for(i=1;i<m;i++)
      {  
        for(j=0;j<n;j++)
            b[i][j]=b[i-1][j]+a[i][j];
        c[i][0]=b[i][0];
        for(j=1;j<n;j++)
            {
                c[i][j]=b[i][j];
                if(b[i][j]-a[i-1][j]+b[i][j-1]<b[i][j])c[i][j]=b[i][j]-a[i-1][j]+b[i][j-1];
            }
        for(j=n-2;j>=0;j--)
            {
                if(b[i][j]==c[i][j]&&b[i][j]-a[i-1][j]+b[i][j+1]<b[i][j])c[i][j]=b[i][j]-a[i-1][j]+b[i][j+1];
                else if(b[i][j]-a[i-1][j]+b[i][j+1]<b[i][j]&&b[i][j]-a[i-1][j]+b[i][j+1]<c[i][j])c[i][j]=b[i][j]-a[i-1][j]+b[i][j+1];
            }
        for(j=0;j<n;j++)
            if(b[i][j]>c[i][j])b[i][j]=c[i][j];
      }
    for(j=0;j<n;j++)
       if(b[m-1][j]<out)out=b[m-1][j];
    printf("%d\n",out);
    system("pause");
    return 0;
} 
