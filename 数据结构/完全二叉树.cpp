#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>1)printf("父节点%d, 左子节点%d,右子节点%d",n/2,n*2,n*2+1);
    if(n==1)printf("父节点空, 左子节点%d,右子节点%d",n*2,n*2+1);
    system("pause");
    return 0; 
}
