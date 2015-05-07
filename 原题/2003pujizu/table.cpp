#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *fin,*fout; 
   int i,w=0,l=0,f=0;
   char a[100000]={'\0'};
   fin=fopen("Table.in","r");
   fout=fopen("Table.out","w");
   for(i=0;a[i-1]!='E';i++)
       {fscanf(fin,"%c",&a[i]);if(a[i]=='\n')i--;}
   if(a[0]=='E'){fclose(fin);fclose(fout);return 0;}
   for(i=0;a[i]!='E';i++)
      {
        if((w-l<=-2||w-l>=2)&&(w>10||l>10)){fprintf(fout,"%d:%d\n",w,l);w=0;l=0;}
        if(a[i]=='W')w++;
        else if(a[i]=='L')l++;
        else break;
      } 
   if(w!=0||l!=0)fprintf(fout,"%d:%d\n",w,l);
   if(a[0]!='E')fprintf(fout,"\n"); 
   i=0;
   w=0;
   l=0;  
   for(i=0;a[i]!='E';i++)
      { 
        if((w-l<=-2||w-l>=2)&&(w>20||l>20)){fprintf(fout,"%d:%d\n",w,l);w=0;l=0;}
        if(a[i]=='W')w++;
        else if(a[i]=='L')l++;
        else break;
      } 
   if(w!=0||l!=0)fprintf(fout,"%d:%d\n",w,l);
   fclose(fin);
   fclose(fout);
   system("pause");
   return 0;
}
