/*����һ������1���������ж����Ƿ�������*/ 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,e=sqrt(n)+5,t=0;
    printf("�����������жϵ���\n");
    scanf("%d",&n);
    if(n<=1){printf("�����Ǵ���1������\n");system("pause");return 1;}
    for(int i=2;i<e&&t==0&&i<n;i++)
        if(n%i==0){t=1;break;}
    if(t==0)printf("������\n");
    else printf("��������\n");
    system("pause");
    return 0;
}
