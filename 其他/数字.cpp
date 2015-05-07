#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int a[1000000]={0};
int n;
int lookup(int x,int y)
{
    for(int i=0;i<n-x;i++)
       if(a[i]==y)return 1;
    return 0;
}
void find(int x)
{
    int i;
    //printf("x%d %d",x,n);
    if(x==0)
       {           
           for(i=0;i<n;i++)
              printf("%d ",a[i]);
           printf("\n");
           return ;
       }
    for(i=1;i<=n;i++)
       {
          //printf("%d %d %d\n",n,i,lookup(x,i));
          if(lookup(x,i)==0)
              {
                  a[n-x]=i;
                  find(x-1);
              }
       }
    return ;
}
int main()
{
    //memset(a,0,sizeof(a));
    scanf("%d",&n);
    find(n);
    system("pause");
    return 0;
}
