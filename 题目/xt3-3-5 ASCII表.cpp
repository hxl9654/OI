/*打印ASCII从1到255的码值，字符对照表*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n;
   for(n=0;n<256;n++)
       printf("%d %c\n",n,n);
   system("pause");
   return 0; 
}
