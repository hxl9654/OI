#include<stdio.h>
int main()
{
    int n,a,b,a1,a2,i,j,t,ans1,ans2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        a1=a;
        a2=b;
        if(a1<a2)
        {
            t=a1;
            a1=a2;
            a2=t;
        }
        t=1;
        while(t!=0)
        {
            t=a1%a2;
            if(t==0)ans2=a2;
            else
            {
                a1=a2;
                a2=t;
            }
        }
        ans1=a*b/ans2;
        printf("%d %d %d\n",i+1,ans1,ans2);
    }

    return 0;
}

