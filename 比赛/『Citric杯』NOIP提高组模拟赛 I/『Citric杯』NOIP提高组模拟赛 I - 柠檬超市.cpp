#include<stdio.h>
#include<stdlib.h>
long long inf[100000][2]={0};
int main()
{
        freopen("in.txt","r",stdin);
        freopen("out.txt","w",stdout);
    long long int n,s,i,maxi=0;
    double max=0;
    scanf("%I64d%I64d",&n,&s);
    for(i=0;i<n;i++)
        scanf("%I64d%I64d",&inf[i][0],&inf[i][1]);
    for(i=0;i<n;i++)
        if((double)(inf[i][0])/(double)(inf[i][1])>max&&inf[i][1]<=s){max=inf[i][0]/inf[i][1];maxi=i;}
    printf("%I64d",maxi+1);
    system("pause");
    return 0;
}
