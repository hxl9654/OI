#include<stdio.h>
#include<stdlib.h> 
int main()
{
    int i,j,a[25][25]={0},n,way[25][25]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<=i;j++)
            scanf("%d",&a[i][j]);
    for(i=n-2;i>=0;i--)
        for(j=0;j<=i;j++)
           {
                if(a[i+1][j+1]>a[i+1][j]){a[i][j]=a[i][j]+a[i+1][j+1];way[i][j]=1;}
                else {a[i][j]=a[i][j]+a[i+1][j];way[i][j]=0;}
           }
    for(i=0,j=0;i<=n-2;i++)
        {
            printf("%d ",way[i][j]);
            j=j+way[i][j];
        }
    printf("\n");
    for(i=0,j=0;i<=n-2;i++)
        {
            printf("(%d,%d)->",i,j);
            j=j+way[i][j];
        }
    printf("(%d,%d)",i,j);
    printf("\n%d",a[0][0]);
    system("pause");
    return 0;
}
