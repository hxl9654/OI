#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c,d;
    
    printf("������һ����λ��\n");
    scanf("%d",&a);
    b=a/100;
    c=a/10%10;
    d=a%10;
    if(a==b*b*b+c*c*c+d*d*d) printf("ԭ������ˮ�ɻ���\n");
    else printf("ԭ���ֲ���ˮ�ɻ���\n");
    
    system("pause");
    return 0;
}
