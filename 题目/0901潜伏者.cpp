
#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *fin,*fout;
   int i,j;
   char a[10000]={'\0'},b[10000]={'\0'},c[10000]={'\0'},m[26]={'\0'};
   fin=fopen("spy.in","r");
   fout=fopen("spy.out","w");
   fscanf(fin,"%s",a);
   fscanf(fin,"%s",b);
   fscanf(fin,"%s",c);
   for(i=0;a[i]!='\0';i++)
       if(m[a[i]-65]==b[i]||m[a[i]-65]=='\0')m[a[i]-65]=b[i];
       else {fprintf(fout,"Failed\n");fclose(fin);fclose(fout);system("pause"); return 0;}
   for(i=0;i<24;i++)
       if(m[i]=='\0'){fprintf(fout,"Failed\n");fclose(fin);fclose(fout);system("pause"); return 0;}
   for(i=0;i<24;i++)
       for(j=i+1;j<24;j++)
           if(m[i]==m[j]){fprintf(fout,"Failed\n");fclose(fin);fclose(fout);system("pause"); return 0;}
   for(i=0;c[i]!='\0';i++)
       c[i]=m[c[i]-65];
   fprintf(fout,"%s\n",c);
   fclose(fin);
   fclose(fout);
   system("pause");
   return 0;
}
