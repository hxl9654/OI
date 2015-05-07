#include<stdio.h>
#include<stdlib.h>
long long a[1000000]={0};
int main()
{
    long long out=999999999,temp=0;
    int n,i,j,k,it,jt;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        for(j=i;j<n;j++)
            {
               temp=0;
               for(k=i;k<=j;k++)
                   temp=temp+a[k];
               if(temp<out&&temp>0)
                   {
                        it=i;
                        jt=j;
                        out=temp;   
                   }
            }
    printf("%I64d %d %d\n",out,it+1,jt+1);
    system("pause");
    return 0;
}
