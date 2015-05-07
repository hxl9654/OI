#include<stdio.h>
#include<stdlib.h>

int main()
{
   int a[10000]={0},b=0,i,j,c=1,t;
   for(;c==1;b++)
   {
     t=0;
     c=scanf("%d",&t);
     for(i=0;i<=b;i++)
         if(t<=a[i])break;
     for(j=b;j>i;j--)
         a[j]=a[j-1];
     a[j]=t;
     if(getchar()=='\n')break;
   }  
   for(j=0;j<=b;j++)
        printf("%d ",a[j]);
   system("pause");
   return 0;
}
