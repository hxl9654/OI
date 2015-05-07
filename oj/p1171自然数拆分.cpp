#include<stdio.h>
#include<stdlib.h>
//long long slove(int x)
//{
//    for(j=1;j<i&&j<=i-j;j++)
         
//}
int main()
{
    int i,j,out,n;
    long long a[90]={0};
    scanf("%d",&n);
    a[0]=0;
    a[1]=0;
    a[2]=1;
    for(i=3;i<=n;i++)
       for(j=1;j<i&&j<=i-j;j++)
           {a[i]=a[i]+a[i-j]-a[j];a[i]=a[i]+(i-1)/2;}
    for(i=1;i<81;i++)           
    printf("%I64d\n",a[i]);
    system("pause");
    return 0;
}
