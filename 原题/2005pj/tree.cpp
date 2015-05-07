#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m,l,a[10000]={0},i,j,k,r,n=0;
    FILE *fin,*fout;
    fin=fopen("tree.in","r");
    fout=fopen("tree.out","w");
    fscanf(fin,"%d%d",&l,&m);
    for(i=0;i<=l;i++)
        a[i]=1;
    for(i=0;i<m;i++)
        {
           fscanf(fin,"%d%d",&k,&r);
           for(j=k;j<=r;j++)
               a[j]=0;         
        }
    for(i=0;i<=l;i++)
        if(a[i]==1)n++;
    fprintf(fout,"%d",n);
    fclose(fin);
    fclose(fout);
    return 0;
}
