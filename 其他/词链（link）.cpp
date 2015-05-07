#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *fin,*fout;
  fin=fopen("link.in","r");
  fout=fopen("link.out","w"); 
  int n,i=0,j=0,out=0,temp[10000],k=0,l=0,a=0,t=0;
  char c[10000][50]={'\0'},temp1[50]={'\0'};
  fscanf(fin,"%d",&n);
  for(;i<n;i++)
     for(j=0;(c[i][j]=fgetc(fin))!='\n';j++)
  
  for(i=0;i<n;i++)
      for(j=0;j<50&&c[i][j]!=0;j++)
            temp[i]=j;
  
  for(i=0;i<n;i++)
    {
     for(a=0;a<50&&c[i][a]!='\0';a++)
        temp1[a]=c[i][a];
     temp[a]='\n';
     if(t>out)out=t;
     t=-1;
     for(j=0;j<n;j++)
        {
           if(l==k)t++;
           l=0;
           for(k=0;temp1[k]!='\n';k++)
               if(temp1[k]==c[j][k])l++;
        }
     }  
  fprintf(fout,"%d",out);
  fclose(fin);
  fclose(fout);
  return 0;
}
