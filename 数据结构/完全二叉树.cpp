#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>1)printf("���ڵ�%d, ���ӽڵ�%d,���ӽڵ�%d",n/2,n*2,n*2+1);
    if(n==1)printf("���ڵ��, ���ӽڵ�%d,���ӽڵ�%d",n*2,n*2+1);
    system("pause");
    return 0; 
}
