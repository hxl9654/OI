#include<stdio.h>
#include<stdlib.h>
int n,l,k,inf[200][3]={0};
double out=0;
void final()
{
    double temp=1;
    int a=0,b=k;
    for(int i=0;i<n;i++)
        { 
            if(inf[i][2]==1){temp=temp*inf[i][0]/100;b=b+inf[i][1];a++; }
            else temp=(temp*(100-(inf[i][0]))/100);       
        }
    if(a>=l&&b>=0)out=out+temp;
}
void slove(int x)
{
    if(x==n){final();return ;}
    inf[x][2]=0;slove(x+1);
    inf[x][2]=1;slove(x+1);
}
int main()
{
    int i;
    scanf("%d%d%d",&n,&l,&k);
    for(i=0;i<n;i++)
        scanf("%d",&inf[i][0]);
    for(i=0;i<n;i++)
        scanf("%d",&inf[i][1]);
    slove(0);
    printf("%.6lf\n",out);
    system("pause");
    return 0;
}
