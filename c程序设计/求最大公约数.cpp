#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,t,r;
    printf("��������������a,b\n");
    scanf("%d,%d",&a,&b);
    if(b>a) {t=a;a=b;b=t;}
    for(r=1;r!=0;)
   {r=a%b;
    a=b;b=r;
   }
   printf("���Լ����%d\n",a);
    
    
    system("pause");
    return 0;
}
