#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,r1,r2,r3,g1,g2,g3;
    printf("请输入本金，活期利率，半年利率，年利率\n");
    scanf("%f,%f,%f,%f",&a,&r1,&r2,&r3);
    
    g1=a*(1+r1);
    g2=a*(1+r2);
    g3=(a*(1+r3))*(1+r3);
    
    printf("活期本息和为%f,\n一年期本息和为%f,\n半年期本息和为%f\n",g1,g2,g3);
    
    
    system("pause");
    return 0;
} 
