#include<stdio.h>
int main()
{
   unsigned long int a,sum=0;
   char c;
   for(;;)
     {
        scanf("%ld",&a);
        sum=sum+a;
        if(getchar()!='+')break;
     } 
   printf("%ld",sum);
   getchar();getchar();getchar();
}
