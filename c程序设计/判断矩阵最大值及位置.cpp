#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int i,j,n,a[3][3],m,b,c;
    m=0;
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
     for(j=0;j<3;j++)
     {
      if(a[i][j]>m){m=a[i][j];b=i+1;c=j+1;}
     }               
    }    
     printf("�����Ϊ%d��%d��%d\n",b,c,m); 
  system("pause");
  return 0;
}
