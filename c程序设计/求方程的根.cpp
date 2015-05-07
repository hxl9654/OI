#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d,t,xa,xb;
    printf("请输入方程系数a,b,c\n");
    scanf ("%f,%f,%f",&a,&b,&c);
    d=b*b-4*a*c;
    t=sqrt(d); 
    if (d<0) printf("方程无实数根\n");  
    else {if (d==0) {xa=(0-b)/(2*a);
                printf("x=%f",xa);}
          else {xa=(-b+t)/(2*a); xb=(-b-t)/(2*a);
                  printf("x1=%f,x2=%f",xa,xb);}
         }
             
   
    system("pause");
    return 0;     
} 
