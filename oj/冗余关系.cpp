#include<stdio.h>
#include<stdlib.h>
int inf[1010]={0};
int f(int,int);
int main()
{
    int n,m,i,t1,t2,t=0,out=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<1010;i++)
        inf[i]=-1;
    for(i=0;i<n;i++)
        {
            scanf("%d%d",&t1,&t2);
            if(inf[t1]==-1&&inf[t2]==-1){inf[t1]=t;inf[t2]=t;t++;}
            else if(inf[t1]!=-1&&inf[t2]==-1)inf[t2]=inf[t1];
            else if(inf[t1]==-1&&inf[t2]!=-1)inf[t1]=inf[t2];
            else if(inf[t1]!=-1&&inf[t2]!=-1&&inf[t1]!=inf[t2])f(t1,t2);
            else if(inf[t1]==inf[t2])out++;
        }
    printf("%d",out);
    system("pause");
    return 0;
} 
int f(int a,int b)
{
    int i;
    for(i=0;i<1010;i++)
        if(inf[i]==inf[a]&&i!=a)inf[i]=inf[b];
    inf[a]=inf[b];
    return 0;
}
