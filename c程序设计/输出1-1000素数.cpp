#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,t,d;
    d=0;
    for(a=2;a<1001;a++)
   {    
        t=0;
        for(b=2;b<=(sqrt(a));b++)
            if(a%b==0){t=1;break;}
        if(t==0){printf("%3d,",a);d++;}
        if(d==10){printf("\n");d=0;}
   }
   printf("\n");
  
    
    
    system("pause");
    return 0;
}
