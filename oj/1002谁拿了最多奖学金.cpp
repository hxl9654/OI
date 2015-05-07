#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
   char name[100][21]={'\0'};
   int inf[100][6]={0},n,i,max=0,maxn;
   long int sum=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
           scanf("%s %d %d %c %c %d",name[i],&inf[i][0],&inf[i][1],&inf[i][2],&inf[i][3],&inf[i][4]);
   for(i=0;i<n;i++)
       {
           if(inf[i][0]>80&&inf[i][4]!=0)inf[i][5]=inf[i][5]+8000;
           if(inf[i][0]>85&&inf[i][1]>80)inf[i][5]=inf[i][5]+4000;
           if(inf[i][0]>90)inf[i][5]=inf[i][5]+2000;
           if(inf[i][0]>85&&inf[i][3]=='Y')inf[i][5]=inf[i][5]+1000;
           if(inf[i][1]>80&&inf[i][2]=='Y')inf[i][5]=inf[i][5]+850;
       }
   for(i=0;i<n;i++)
       {
          sum=sum+inf[i][5];
          if(inf[i][5]>max){max=inf[i][5];maxn=i;}
       }
   printf("%s\n%d\n%ld",name[maxn],max,sum);

   return 0;
}
