#include<stdio.h>
#include<stdlib.h>
int main()
{
   float r,s,c;
   float *pr=&r,*ps=&s,*pc=&c;
   scanf("%f",pr);
   *ps=*pr**pr*3.1415926;
   *pc=2*3.1415926**pr;
   printf("%f %f",*ps,*pc);
   system("pause");
   return 0;
    
}
