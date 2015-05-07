#include<stdio.h>
#include<stdlib.h>
long long ar[1010][1010]={0},arr[1010][1010]={0};
int main()
{freopen("factor.in","r",stdin);
freopen("factor.out","w",stdout);
    int a,b,k,n,m,i,j;
    scanf("%d%d%d%d%d",&a,&b,&k,&n,&m);
    for(i=0;i<=k;i++)
        ar[i][0]=1;
    for(i=0;i<=k;i++)
       {
           ar[i][0]=1;
           for(j=1;j<i;j++)
              ar[i][j]=(ar[i-1][j]+ar[i-1][j-1])%10007;
           ar[i][j]=1;           
       }
    arr[0][0]=1;
    for(i=1;i<=k;i++)
        arr[i][0]=arr[i-1][0]*a%10007;
    for(i=1;i<=k;i++)
        {   
            
            for(j=1;j<i;j++)
                arr[i][j]=arr[i-1][j-1]*b%10007;
            arr[i][j]=arr[i-1][j-1]*b;
        }
    for(i=0;i<=k;i++)
       for(j=0;j<i;j++)
           ar[i][j]=ar[i][j]*arr[i][j]%10007;
    printf("%I64d\n",ar[k][m]);
        /*for(i=0;i<=k;i++)
       {
           for(j=0;j<=k;j++)
           printf("%I64d ",arr[i][j]);
           printf("\n");
       }*/
           system("pause");
           return 0;
}
