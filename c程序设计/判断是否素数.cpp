#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,n,t;
    t=0;
    scanf("%d",&a);
    if(a>1)
    {
     for(n=2;n<(sqrt(a)+1);n++)
     {
      if(a%n==0){t=1;break;}                
     }
     if(t==1)printf("��������\n");
     else printf("������\n"); 
    }
    else printf("�����жϵ�������Ϊ����1������\n");
    
    system("pause");
    return 0;
}
