/*判断101——200之间有多少个素数，并输出所有的素数*/ 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{   
    int t=0,a=0;
    for(int n=101;n<201;n++)
       {  t=0;
          for(int i=2;i<sqrt(n)+5;i++)
              if(n%i==0){t=1;break;}
          if(t==0){a++;printf("%d ",n);}
       }
    printf("\n共%d个\n",a);
    system("pause");
    return 0;
}
