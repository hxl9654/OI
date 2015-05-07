/*魔方阵：它的每一行、每一列、对角线之和均相等，如三阶魔方阵为
8 1 6
3 5 7
4 9 2
要求输出1—n×n奇数阶的魔方阵*/
#include<stdio.h>
#include<stdlib.h>
int a[1000][1000]={{0},{0}};
int main()
{
    int n=1,i=0,j=0,n2=0,ti=0,tj=0;
    scanf("%d",&n);
    i=1;
    j=(n+1)/2;
    n2=n*n;
    if(n%2==0)exit(1);
    a[i][j]=1;
    for(int b=2;b<=n2;b++)
        {
            if(j==n||i==1)
               {
                  if(j==n){tj++;j=1;}
                  else j++;
                  if(i==1){ti++;i=n;}
                  else i--;
               } 
            else {j++;i--;}
            if(a[i][j]!=0)
              { 
               if(ti!=0||tj!=0)
                {
                   if(tj==1){j=n;tj=0;}
                   else j--;
                   if(ti==1){i=1;ti=0;} 
                   else i++;     
                }
               else {j--;i++;}
               i++;
              } 
              a[i][j]=b;
              ti=0;
              tj=0;
        }
    for(i=1;i<n+1;i++)
       { 
         for(j=1;j<n+1;j++)
            printf("%3d ",a[i][j]);
         printf("\n");
       }
    system("pause");
    return 0;
}
