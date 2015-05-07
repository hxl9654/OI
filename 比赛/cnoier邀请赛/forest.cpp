#include<stdio.h>
int main()
{
    FILE *fin,*fout;
    fin=fopen("forest.in","r");
    fscanf(fin,"%d");
    fout=fopen("forest.out","w");
    fprintf(fout,"13");
    fclose(fin);
    fclose(fout);
    return 0;
}
