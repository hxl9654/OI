#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c;
    for(a=1;a<10;a++)
   {    for(b=1;b<10;b++)
         {
           c=a*b;
            printf("%d¡Á%d=%2d ",a,b,c);
         }
    printf("\n");
   }
  
    
    
    system("pause");
    return 0;
}
