#include<stdio.h>
#include<stdlib.h>
int main()
{
   int i=1,j=1;
   for(;i<10;i++)
       {
         for(j=1;j<10;j++)
             printf("%d*%d=%2d ",i,j,i*j);
         printf("\n");
       }
   system("pause");
   return 0;
}
