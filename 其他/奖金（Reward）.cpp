#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *fin,*fout;
  fin=fopen("Reward.in","r");
  fout=fopen("Reward.out","w"); 
  int m,n,out=0;
  short int y[20000][2]={0},o[10000]={0},p=1,k=0;
  fscanf(fin,"%d %d\n",&n,&m);
  for(int i=0;i<m;i++)
      fscanf(fin,"%d %d\n",&y[i][0],&y[i][1]);
  
  for(;k<n;k++)
     o[k]=100;
  o[k]=500;
  for(int i=0;i<=1000000&&p!=0;i++)
      {
          p=0;
          for(int j=0;j<m;j++)
             if(o[y[j][0]-1]<=o[y[j][1]-1])
                 {o[y[j][0]-1]=o[y[j][0]-1]+1;p=1;}
      }
  for(int j=0;j<m;j++)
      if(o[y[j][0]-1]<=o[y[j][1]-1]){fprintf(fout,"Poor Xed");printf("Poor Xed");exit(0);}
  
  for(int i=0;i<n;i++)
     out=out+o[i];
  
  fprintf(fout,"%d",out);
printf("%d",out);
  fclose(fin);
  fclose(fout);
  system("pause");
  return 0;
}
