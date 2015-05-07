#include<stdio.h>
int main()
{
   int left=0,saven=0,cost=0,i,out;
   for(i=0;i<12;i++)
       {
           scanf("%d",&cost);
           left=left+300-cost;
           if(left<0){printf("-%d",i+1);return 0;}
           saven=saven+left/100;
           left=left%100;
       }
   saven=saven*120;
   out=saven+left;
   printf("%d",out);
   getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();
   return 0;
}
