#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double a;
    int n,t,i;
    long int c;
    for(i=0;i<=1000;i++)
    {printf("�����������жϵ����֣�������������ֽ�������");
         t=0;
         scanf("%lf",&a);
         c=a/1;
          if(c>1.0&&c==a)
         {for(n=2;n<(sqrt(a)+1);n++)
            {
              if(c%n==0){t=1;break;}                
            }
         if(t==1)printf("��������\n");
         else printf("������\n"); 
        }
        else {printf("�����жϵ�������Ϊ����1������\n");a=0; }
    }
    
    return 0;
}
