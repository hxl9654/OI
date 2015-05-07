#include<stdio.h>
#include<stdlib.h>
int main()
{
    int p,n,m,i;
    long long f[1001]={1,1,0};
    FILE *fin,*fout;
    fin=fopen("fibonacci.in","r");
    fout=fopen("fibonacci.out","w");
    fscanf(fin,"%d%d%d",&n,&p,&m);
    for(i=2;i<=m;i++)
       {f[i]=(f[i-1]+f[i-2])%p;if(f[i]==n){fprintf(fout,"%d",i+1);fclose(fin);fclose(fout);return 0;}}
    fprintf(fout,"-1");
    fclose(fin);
    fclose(fout);
    return 0;
}
