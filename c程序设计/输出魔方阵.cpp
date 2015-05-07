#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
  int a[3][3]={0};
  int i,j,t;               //i是列。j是行
  a[1][2]=1;
  for(j=0,i=1,t=1;t<10;t++)
   {

     j=j-1;i=i+1;if(a[j][i]!=0){j=j+2;i=i-1;}
     if(j=0)j=3;if(i=4)i=1;
     a[j][i]=t;
   }
   t=1;
   for(i=0;i<3;i++)
     for(j=0;j<3;j++,t++)
       {
         printf("%2d",a[j][i]);
         if(t==3){printf("\n");t=0;}
       }


  printf("\n");
  system("pause");
  return 0;
}
