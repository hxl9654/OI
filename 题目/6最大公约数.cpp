/*������������m,n,�����Լ����С������*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{   
    int m,n,l=0,t=1;
    printf("����������\n");
    scanf("%d%d",&m,&n);
    if(m==n){printf("%d\n",m);system("pause");return 0;}
    if(m>n)l=n;
    else l=m;
    for(int i=1;i<=l;i++)
        if(m%i==0&&n%i==0)t=i;
    printf("%d\n",t);
    system("pause");
    return 0;
}
