#include<stdio.h>
#include<stdlib.h>
long long x[50000]={0};
int main()
{
    long long a,b,c,lasans=0,a0,b0,c0;
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%I64d",&x[i]);
    for(;;)
        {
             scanf("%I64d%I64d%I64d",&a0,&b0,&c0);
             a=a0+lasans;
             b=b0+lasans;
             c=c0+lasans;
             if(a==0&&b==0&&c==0)break;
             for(i=1;i<=n;i++)
                if(a*(i+1)*x[i-1]*x[i-1]+(b+1)*i*x[i-1]+(c+i)==0)
                      {
                           lasans=i;
                           printf("%I64d\n",lasans);                                
                      }
        }
    system("pause");
    return 0;
}
