#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *fin,*fout;
  fin=fopen("sequence.in","r");
  fout=fopen("sequence.out","w"); 
  int m[100000]={-1},temp[100000];
  int n,i=0,out=0,j=-1,t=0;
  fscanf(fin,"%d\n",&n);
  for(;i<n;i++)
      fscanf(fin,"%d\n",&m[i]);
/*2 5 9;
2£¬2£¬8£¬10£»
1£¬3£¬7£¬11£»
0£¬4£¬6£¬12£»
-1£¬5£¬5£¬13¡£
*/
  m[i]=-1;
  for(i=-10000;i<10000;i++)
     { 
       temp[0]=i;
       if(t==j)out++;
       t=0;
       for(j=1;j<n;j++)
          {
           temp[j]=m[j-1]*2-temp[j-1];
           if(temp[j]==m[j-1]*2-temp[j-1]&&temp[j-1]<=temp[j])t++;
           else break;
           //printf("%d",t);
           if(t==n-1)out++;
          }
           
     }
  
  fprintf(fout,"%d",out);
printf("%d",out);
  fclose(fin);
  fclose(fout);
  system("pause");
  return 0;
}
