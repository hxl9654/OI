#include<stdio.h>
int main()
{
    FILE *fin,*fout;
    int n,k,i,t=0,a[10000]={0},m,j,out;
    long int l=1;
    fin=fopen("circle.in","r");
    fout=fopen("circle.out","w");
    fscanf(fin,"%d%d",&n,&k);
    m=n;
    for(i=0;i<k;i++)
        l=l*10;
    for(i=1;t==0;i++)
        {
            a[i-1]=m*n%l;
            for(j=0;j<i;j++)
                if(a[i]==a[i-1]){t=1;break;}         
        }
    out=i-1-j;
    fprintf(fout,"%d",out);
    fclose(fin);
    fclose(fout);
    return 0;
}
