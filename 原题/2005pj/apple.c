#include<stdio.h>
int main()
{
    int i,a[10]={0},h,n=0;
    FILE *fin,*fout;
    fin=fopen("apple.in","r");
    fout=fopen("apple.out","w");
    for(i=0;i<10;i++)
        fscanf(fin,"%d",&a[i]);
    fscanf(fin,"%d",&h);
    for(i=0;i<10;i++)
        if(a[i]<=h+30)n++;
    fprintf(fout,"%d\n",n);
    fclose(fin);
    fclose(fout);
    return 0;
}
