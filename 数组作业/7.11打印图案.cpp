/*¥Ú”°Õº∞∏£∫
    *****
     *****
      *****
       *****
        *****   
*/ 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a[6]={'*','*','*','*','*'};
    for(int i=0;i<5;i++)
       {
         for(int j=0;j<i;j++)
            printf(" ");
         printf("%s\n",a);       
       }
    system("pause");
    return 0;
}
