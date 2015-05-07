#include<stdio.h>
#include<stdlib.h>
long long a[10000][2]={0},s[10000]={0},t;
long long sum=0,maxn=0;
int n;
int main()
{
    int i,j,k=0,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
       {
           scanf("%lld",&t);
           sum=sum+t;
           for(j=0;j<10000;j++)
               if(a[j][0]==t)a[j][1]++;
               else if(a[j][0]==0){a[j][0]=t;a[j][1]++;}
           s[k]=t;
           k++;
       }
    printf("%.2lf\n",sum/n);
    for(i=0;i<n;i++)
        for(j=0;j<n-i-1;j++)
            if(s[j]>s[j+1]){t=s[j];s[j]=s[j+1];s[j+1]=t;}
    if(n%2==1)printf("%.2lld\n",s[n/2]);
    else printf("%.2lld\n",(s[n/2]+s[n/2-1])/2);
    for(i=0;i<n;i++)
        if(a[i][1]>max){max=a[i][1];maxn=a[i][0];}
    printf("%lld",max);
    system("pause");
    return 0;
}
