#include <stdio.h>
#include <stdlib.h>

int main()
{
     float a,b,c,max;
     printf("ÇëÊäÈëÊýÖµa,b,c") ;
     printf("\n");
     scanf("%f,%f,%f",&a,&b,&c);
     if(a>b) max=a; 
     else max=b;
     if(c>max) max=c;
     printf("max=%f\n",max);
     
     system("pause");
     return 0;
     }
