#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[7][2]={0},i,out=0;
    for(i=0;i<7;i++)
        scanf("%d%d",&a[i][0],&a[i][1]);
    for(i=0;i<7;i++)
        a[i][0]=a[i][0]+a[i][1];
    for(i=0;i<7;i++)
        if(a[i][0]>8){out=i+1;break;}
    printf("%d",out);
    system("pause");
    return 0;
} 
