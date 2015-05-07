#include<stdio.h>
#include<stdlib.h>
char temp[5000000]={0};
short int num[5000000]={0};
int main()
{
    long long int len_s=0,i,n,del=0,max=0,max_i=-1;
    int flag;
    scanf("%s",temp);
    scanf("%I64d",&n);
    for(i=5000000-1;temp[i]==0;i--);
    len_s=i;
    if(len_s==n-1){printf("0");system("pause");return 0;}
    //printf("len_s %d\n",len_s);system("pause");
    for(i=len_s;i>=0;i--)
        num[len_s-i]=temp[i]-'0';
    //for(i=0;i<100;i++)printf("%d",num[i]);
    //printf("\n");
    for(i=len_s;i>=0&&i>=len_s-n;i--)
        if(num[i]==0&&i>=len_s-n)
              if(num[i-1]!=0){flag=1;break;}
              else {for(;num[i]!=0&&i>=len_s-n;i--);flag=1;break;}
    del=len_s-i;
    //printf("del %d\n",del);system("pause");
    if(flag==1)
         {
              n=n-del;
              len_s=len_s-del-1;
              for(i=0;i<=del;i++)
                  num[i]=-1;
         }
    //printf("len_s %d\n",len_s);system("pause");
    for(;n>0;)
         {
              for(i=0;i<len_s;i++)
                  if(num[i]>max){max=num[i];max_i=i;}
              num[max_i]=-1;
              n--;
              max=0;
              max_i=0;
         }
    flag=0;
    for(i=len_s;i>=0;i--)
         if(num[i]!=-1)break;
    for(;i>=0;i--)
         if(num[i]!=-1){printf("%d",num[i]);flag=1;}
    if(flag==0)printf("0");
    system("pause");
    return 0;
}
