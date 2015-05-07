#include<stdio.h>
#include<stdlib.h>

void slove();
int a[7]={0};
int main()
{
    printf("请输入用于排列的数字（7个），以空格分隔\n");system("pause");
    for(int i=0;i<7;i++)
        scanf("%d ",&a[i]);system("pause");
    slove();system("pause");
    for(int i=0;i<7;i++)
        printf("%d ",a[i]);
    system("pause");
    return 0;
}

void slove()
{
    int i=0,j=6,t;system("pause");
    aim:if(a[3]<a[i]){t=a[i];a[i]=a[j];a[j]=t;i++;j--;}system("pause");
    if(i!=4&&j!=4)goto aim;system("pause");
    return;
}
