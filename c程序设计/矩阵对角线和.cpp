#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int i,j,n,a[3][3],h;
    h=0;
    printf("������3*3����Ԫ�أ��Կո�ֿ�\n"); 
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
      scanf("%d",&a[i][j]);               
     }               
    }
    printf("ԭ����Ϊ\n") ;
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
     printf("������Ϊ%d\n",h); 
  system("pause");
  return 0;
}
