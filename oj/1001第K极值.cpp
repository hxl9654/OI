#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
   long int a[10009]={0},n,k,i,j,t,a1,a2,flag=1;
   scanf("%ld%ld",&n,&k);
   for(i=0;i<n;i++)
       scanf("%ld",&a[i]);
   for(i=0;i<n;i++)
       for(j=0;j<n-i-1;j++)
           if(a[j]>a[j+1])
              {t=a[j];a[j]=a[j+1];a[j+1]=t;}
   a1=a[k-1];
   a2=a[n-k];
   a1=a2-a1;
   if(a1<2){printf("NO\n%ld",a1);system("pause");return 0;}
   for(i=2;i<a1;i++)
           if(a1%i==0){flag=0;break;}                       
   if(flag!=0){printf("YES\n%ld",a1);system("pause");return 0;}
   else {printf("NO\n%ld",a1);system("pause");return 0;}
}
