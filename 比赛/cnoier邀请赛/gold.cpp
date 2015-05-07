#include<stdio.h>
#include<stdlib.h>
long int map[10000][10000]={0},hope[10000]={0},last=0,h;
int l;
int m;
int change(int x)
{
    if(x/10==0)return x;
    if(x/100==0)return ((x%10)*(x/10));
    if(x/1000==0)return ((x/100)*(x%10)*(x/10%10));
    return ((x/1000)*(x%10)*(x/10%10)*(x/100%10));
}
void inset(long int x,int y)
{
     int i;
     for(i=last;i>=y;i--)
        hope[i]=hope[i-1];
     hope[y]=x;
     last++;
     if(last>m-1)last=m-1;
}
int main()
{
    long sum=0;
    int n,i,j,k;
    long long out1=0;
    FILE *fin,*fout;
    fin=fopen("gold.in","r");
    fout=fopen("gold.out","w");
    fscanf(fin,"%d%d%ld",&n,&m,&h);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(change(i+1)>0&&change(i+1)<=n&&change(j+1)>0&&change(j+1)<=n)map[change(i+1)-1][change(j+1)-1]++;
    
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            for(k=0;k<h;k++)
                if(map[i][j]>hope[k])inset(map[i][j],k);
    for(i=0;i<m;i++)
       out1=out1+hope[i];
    if(out1<h){fprintf(fout,"%ld",hope[0]);fclose(fin);fclose(fout);return 0;}
    else {fprintf(fout,"%lld ",out1);for(l=0;sum<h;l++)sum=sum+hope[l];fprintf(fout,"%d",l);fclose(fin);fclose(fout);return 0;}
}
