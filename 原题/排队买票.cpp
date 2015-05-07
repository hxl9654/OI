#include<stdio.h>
#include<stdlib.h>
int n0=0,n5=0,n,a[10000]={0};
void dfs(int x)
{
    if(x==0)
       {
            for(int i=0;i<n;i++)
               printf("%d ",a[i]);
            printf("\n");
            return ;
       } 
    if(n0<n5&&n0<n/2){n0++;a[n-x]=1;dfs(x-1);n0--;}
    if(n5<n/2){n5++;a[n-x]=0;dfs(x-1);n5--;}
    return ;
}
int main()
{
    scanf("%d",&n);
    dfs(n);
    system("pause");
    return 0;
}
