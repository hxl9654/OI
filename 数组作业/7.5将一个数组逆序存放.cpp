#include<stdio.h>
#include<stdlib.h>
#define N 10
int main()
{
   int a[N]={1,2,3,4,5,6,7,8,9,10};
   int b[N]={0};
   for(int i=1;i<=N;i++)
      b[N-i]=a[i-1];
   for(int i=0;i<N;i++)
      a[i]=b[i];
   for(int i=0;i<N;i++)
      printf("%d ",a[i]);
   system("pause");
   return 0;      
}
