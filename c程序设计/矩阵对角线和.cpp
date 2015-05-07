#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int i,j,n,a[3][3],h;
    h=0;
    printf("请输入3*3矩阵元素，以空格分开\n"); 
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
      scanf("%d",&a[i][j]);               
     }               
    }
    printf("原矩阵为\n") ;
    for(i=0;i<3;i++)
    {
     for(j=0,n=1;j<3;j++,n++)
     {
      printf("%d ",a[i][j]);   
      if(n==3){printf("\n");n=1;}            
     }               
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
     for(j=0,n=1;j<3;j++,n++)
     {
         if(j==i)h=h+a[i][j];
     }               
    }    
     printf("计算结果为%d\n",h); 
  system("pause");
  return 0;
}
