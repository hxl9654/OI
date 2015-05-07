#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159


int main()
{
    float r,s;
    
    printf("请输入圆的半径R:");
    scanf("%f",&r);
    s=r*r*PI;
    printf("圆面积S=%f\n",s);
    
    system("pause");
    return 0;
}
