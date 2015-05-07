/*打印杨辉三角形
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
要求输出10行*/ 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10][10]={0};
    for(int i=0;i<10;i++)
       {
         a[i][0]=1;
         a[i][i]=1;   
       }
    for(int i=2;i<10;i++) 
          for(int j=1;j<i;j++)            
                a[i][j]=a[i-1][j-1]+a[i-1][j];
    for(int i=0;i<10;i++)
        { 
          for(int j=0;j<=i;j++)
              printf("%3d ",a[i][j]);
          printf("\n");
        }
    system("pause");
    return 0;
}
