#include<stdio.h>
int main()
{
    int a[105]={0},i,j,n,t,out=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)     
        for(j=0;j<i;j++)
            if(a[i]==a[j])a[j]=0;
    for(i=0;i<n;i++)
        for(j=0;j<n-i;j++)
            if(a[j]>a[j+1]){t=a[j];a[j]=a[j+1];a[j+1]=t;}
    for(i=0;i<=n;i++)
        if(a[i]!=0)out++;
    printf("%d\n",out);
    for(i=0;i<=n;i++)
        if(a[i]!=0)printf("%d ",a[i]);

    return 0;
} 
