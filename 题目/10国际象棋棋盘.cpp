#include<stdio.h>
#include<stdlib.h>

int main()
{
 int i,j;
 
 for(i=1;i<9;i++)
    {   for(j=1;j<9;j++)
           {if((i+j)%2==0)printf("¡õ");
            else printf("¡ö");}
        printf("\n")  ; 
    }   
      
system("pause");    
return 0;
}
