#include<stdio.h>
#include<stdlib.h>
int b[1000][1000]={0};
int main()
{
    int n,i,j,a,k;
    scanf("%d",&n);
    i=0;
    j=n-i;
    a=1;
    for(k=0;k<n/2;k++)
        {
          for(i=k,j=n-1-k;i<n-1-k;i++)
              {b[i][j]=a;a++;}
          b[i][j]=a;
          a++;
          for(j--;j>k;j--)
              {b[i][j]=a;a++;}
          b[i][j]=a;
          a++;
          for(i--;i>k;i--)
              {b[i][j]=a;a++;}
          b[i][j]=a;
          a++;
          for(j++;j<n-1-k;j++)
              {b[i][j]=a;a++;}
        }
    if(n%2==1)b[n/2][n/2]=a;
    for(i=0;i<n;i++)
       {
          for(j=0;j<n;j++)
              printf("%3d ",b[i][j]);
          printf("\n");
       }
    system("pause");
    return 0;  
}
