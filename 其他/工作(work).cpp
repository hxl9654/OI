#include<stdio.h>
#include<stdlib.h>

int main()
{
   FILE *fin,*fout;
   fin=fopen("work.in","r");
   fout=fopen("work.out","w");
   int n,out=9999999,t[1000][3],outt=0,time=0;
   fscanf(fin,"%d\n",&n);
   for(int i=0;i<n;i++)
       fscanf(fin,"%d %d %d\n",&t[i][0],&t[i][1],&t[i][2]);
   for(int k=0;k<n;k++)
       for(int j=1;j<n;j++)
         {
          if(outt<out&&outt!=0)out=outt;
          outt=0;
          time=0; 
          for(int i=k;i<n;i=i+j)
               if(time>=t[i][1]&&time+t[i][0]<=t[i][2])
                   {time=time+t[i][0];outt=outt+t[i][0];}
         }

   
   
   
   fprintf(fout,"%d",out);
   printf("%d",out);
   fclose(fin);
   fclose(fout);
   system("pause");
   return 0;    
}
