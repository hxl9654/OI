#include <stdio.h>
#include <stdlib.h>

int main()

{
    int f1,f2,a;
    f1=1;f2=1;
    printf("%d,%d,",f1,f2);
    
    for(a=1;a<10;a++)
        {
        f1=f1+f2;
        f2=f1+f2;
        printf("%d,%d,",f1,f2);             
        }    
        printf("\n");
      
    system("pause");
    return 0;
    
}
