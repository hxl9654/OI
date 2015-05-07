#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define N 4001

int main()
{
   int i,t=1,a[N-1],j;
   for(i=1;i<N;i++)
   {
     a[i]=i;
   }
   a[1]=0;
   for(i=2;i<sqrt(N)+1;i++)
   {
    for(j=i+1;j<N;j++)
    {if(a[i]!=0&&a[j]!=0)
     {if(a[j]%a[i]==0)a[j]=0;}
    }
   }
    for(i=1;i<N;i++)
    {
      if(a[i]!=0){printf("%d,",a[i]);t++;}
      if(t==11){printf("\n");t=1;}  
    } 
    printf("\n");
  system("pause");
  return 0;
}
