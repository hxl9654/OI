#include<stdio.h>
#include<stdlib.h>
#define N 10

int main()
{
   int i=0,j=0,a[N]={9,8,7,68,5,41,3,2,1,15},t;
   int *pj;
   for(;i<N;i++)
       for(pj=a;pj<a+N;pj++)
           if(*pj>*(pj+1))
              {t=*pj;
              *pj=*(pj+1);
              *(pj+1)=t;}
   for(i=0;i<N;i++)
      printf("%d ",a[i]);
   system("pause");
   return 0;
       
}
