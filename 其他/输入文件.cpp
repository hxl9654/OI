#include<stdio.h>
#include<stdlib.h>

int main()
{
   FILE *fin;
   fin=fopen("fin.in","r");  system("pause");
   int b,a[100][100]={0},c;  system("pause");
   fscanf(fin,"%d",&b);  system("pause");
   for(int i=0;i<2;i++)
      fscanf(fin,"%d%d",&a[i][0],&a[i][1]);
    system("pause"); fscanf(fin,"%d",&c);  system("pause");
   printf("%d %d %d %d %d %d",b,a[0][0],a[0][1],a[1][0],a[1][1],c);
   system("pause");
   return 0;
}
