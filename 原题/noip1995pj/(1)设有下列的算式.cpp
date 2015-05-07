#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n,b,t,i;
   for(i=0;i<3;i++)
      {
       n=10+i;
       b=809*n+1;
       if((b-n*8)/100>=1&&(b-n*8)/100<10&&n*9>100)break;
      } 
   printf("          8 0 9\n     -------------\n%2d)  %4d\n       %2d\n     -------------\n         %3d\n         %3d\n     -------------\n              1",n,b,n*8,n*9+1,n*9);
   system("pause");
   return 0;
}
