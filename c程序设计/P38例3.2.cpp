#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,r1,r2,r3,g1,g2,g3;
    printf("�����뱾�𣬻������ʣ��������ʣ�������\n");
    scanf("%f,%f,%f,%f",&a,&r1,&r2,&r3);
    
    g1=a*(1+r1);
    g2=a*(1+r2);
    g3=(a*(1+r3))*(1+r3);
    
    printf("���ڱ�Ϣ��Ϊ%f,\nһ���ڱ�Ϣ��Ϊ%f,\n�����ڱ�Ϣ��Ϊ%f\n",g1,g2,g3);
    
    
    system("pause");
    return 0;
} 
