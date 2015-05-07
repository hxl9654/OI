#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a[20]={0},i=0,j,n0=0,n1=0,A=0,B=0,nt;
    for(n=1;n<=1000;n++)
        {
          for(i=0;i<20;i++)
             a[i]=2;
          i=0;
          nt=n;
          for(;;)
             {
                 a[i]=nt%2;
                 i++;
                 nt=nt/2;
                 if(nt==0)break;
             }
          for(j=0;j<20;j++)
              if(a[j]==1)n1++;
              else if(a[j]==0)n0++;
          if(n0<n1)A++;
          else B++;
          i=0;
          n0=0;
          n1=0;
        }
    printf("%d %d",A,B);
    system("pause");
    return 0;
}
