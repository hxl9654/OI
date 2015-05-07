#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a[2][3]={2,5,6,7,3,1},i,j;
    
     for(j=0;j<2;j++)
    {
        for(i=0;i<3;i++)
        { 
          printf("%d ",a[j][i]);
          if(i==2)printf("\n");
       }
    }   
    printf("×ªÖÃºóÎª:\n");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        { 
          printf("%d ",a[j][i]);
          if(j==1)printf("\n");
        }
    }   
        printf("\n");
    system("pause");
    return 0;
}

