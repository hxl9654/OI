#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int i,j,n,a[3][3],m,b,c;
    m=0;
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
     for(j=0;j<3;j++)
     {
      if(a[i][j]>m){m=a[i][j];b=i+1;c=j+1;}
     }               
    }    
     printf("最大数为%d行%d列%d\n",b,c,m); 
  system("pause");
  return 0;
}
