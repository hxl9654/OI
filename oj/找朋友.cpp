#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    unsigned long int num[15000]={0},t;
    char src[15000][100]={'\0'},t1[100]={'\0'};
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
         scanf("%s",src[i]);
    for(i=0;i<n;i++)
         scanf("%ld",&num[i]);
    for(i=0;i<n;i++)
       for(j=0;j<n-i-1;j++)
           if(strcmp(src[j],src[j+1])>0)
              {strcpy(t1,src[j]);strcpy(src[j],src[j+1]);strcpy(src[j+1],t1);}
    for(i=0;i<n;i++)
       for(j=0;j<n-i-1;j++)
           if(num[j]>num[j+1]){t=num[j];num[j]=num[j+1];num[j+1]=t;}
    for(i=0;i<n;i++)
        printf("%s %ld\n",src[i],num[i]);
    //system("pause");
    return 0;
}

