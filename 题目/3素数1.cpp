/*输入一个大于1的整数，判断它是否是素数*/ 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,e=sqrt(n)+5,t=0;
    printf("请输入用于判断的数\n");
    scanf("%d",&n);
    if(n<=1){printf("必须是大于1的整数\n");system("pause");return 1;}
    for(int i=2;i<e&&t==0&&i<n;i++)
        if(n%i==0){t=1;break;}
    if(t==0)printf("是素数\n");
    else printf("不是素数\n");
    system("pause");
    return 0;
}
