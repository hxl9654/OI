/*ISBN*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fin,*fout;
    int a[4]={0},b[9]={0},t=0,i=0;
    char y='\0';
    fin=fopen("isbn.in","r");
    fout=fopen("isbn.out","w");
    fscanf(fin,"%d-%d-%d-",&a[0],&a[1],&a[2]);
    fscanf(fin,"%c",&y);
    b[0]=a[0];
    b[1]=a[1]/100;
    b[2]=a[1]/10%10;
    b[3]=a[1]%10;
    b[4]=a[2]/10000;
    b[5]=a[2]/1000%10;
    b[6]=a[2]/100%10;
    b[7]=a[2]/10%10; 
    b[8]=a[2]%10;
    for(;i<9;i++)
        t=t+b[i]*(i+1);printf("%d ",t);
    t=t%11;
    if(t==10&&y=='X'){fprintf(fout,"Right\n");fclose(fin);fclose(fout);return 0;}
    else a[4]=y-48;
    if(t==a[4]){fprintf(fout,"Right\n");fclose(fin);fclose(fout);return 0;}
    else if(t!=10){fprintf(fout,"%d-%d-%d-%d\n",a[0],a[1],a[2],t);}
    else {fprintf(fout,"%d-%d-%d-X\n",a[0],a[1],a[2]);}
    fclose(fin);
    fclose(fout);
    return 0;
}//system("pause");
