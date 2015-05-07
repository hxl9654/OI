#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a[20],i,b=1;
    a[0]=1;a[1]=1;
    
    for(i=2;i<20;i++)
    {
      a[i]=a[i-2]+a[i-1];                    
    }
    
    for(i=0;i<20;i++)
    {
      printf("%4d ",a[i]);
      b++; 
      if(b%6==0){printf("\n");b=1;}                
    }
    printf("\n");
    system("pause");
    return 0;
}

