#include<stdio.h>
#include<stdlib.h>
int father[5001]={0};
int f(int x)
{
    if(father[x]==x)return x;
    else return f(father[x]);
}
int main()
{
    int n,m,p,i,j,t1,t2,f1,f2;
    scanf("%d%d%d",&n,&m,&p);
    for(i=0;i<=n;i++)
        father[i]=i;
    for(i=0;i<m;i++)
        {
            scanf("%d%d",&t1,&t2);
            f1=f(t1);
            f2=f(t2);
            if(f1==f2)continue;
            if(f1==t1)father[f1]=f2;
            else if(f2==t2)father[f2]=f1;
            else father[f2]=father[f1];
        }
    for(i=0;i<p;i++)
        {
             scanf("%d%d",&t1,&t2);
             if(f(t1)==f(t2))printf("Yes\n");
             else printf("No\n");       
        }
    system("pause");
    return 0;
}
