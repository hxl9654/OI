#include<stdio.h>
int main()
{FILE *f=fopen("in.txt","w");
int i,j;
for(i=0;i<500;i++)
{for(j=0;j<500;j++)
fprintf(f,"*");
fprintf(f,"\n");}  
}
