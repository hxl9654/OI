#include<stdio.h>
#include<stdlib.h>
#define N 10

int main()
{
   int i=0,j=0,a[N]={9,8,7,68,5,41,3,2,1,15},t;
   for(;i<N;i++)
       for(j=0;j<N-i-1;j++)
           if(a[j]>a[j+1])
              {t=a[j];a[j]=a[j+1];a[j+1]=t;}
   for(i=0;i<N;i++)
      printf("%d ",a[i]);
   system("pause");
   return 0;
       
}
