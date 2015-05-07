#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int panduan(char a[],char b[]);
int jieshu(char a[],char b[]);
int f(char a[],char b[]);
int main()
{
    unsigned int n,i,out=0,k,j1;
    char t[20]={'\0'},a[20]={'\0'},b[20]={'\0'},j[20]={'\0'},x[20]={'\0'};
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            scanf("%s%s%s",x,a,b);
            for(j1=0;x[j1]!='\0';j1++)
                x[j1]=x[j1]-'0';
            for(j1=0;a[j1]!='\0';j1++)
                a[j1]=a[j1]-'0';
            for(j1=0;b[j1]!='\0';j1++)
                b[j1]=b[j1]-'0';system("pause");
            for(strcpy(j,a);;)
              {
                  if(panduan(j,x)==0)out++;
                  for(k=strlen(j)-1;k>=0;k--)
                        {
                            j[k]=j[k]+1;
                            j[k+1]=(int)j[k]/10;
                            j[k]=(int)j[k]%10;
                        }system("pause");
                  if(jieshu(j,b)==0){printf("%d\n",out);break;}
              }

          }
          system("pause");
}
int panduan(char a[],char b[])
{
    int i;
    for(i=0;b[i]!=0;i++)
        if(a[i]!=b[i])return 1;
    return 0;
}
int jieshu(char a[],char b[])
{
    if(strlen(b)>strlen(a))return 0;
    if(f(a,b)==0)return 0;
    return 1;
}
int f(char a[],char b[])
{
    int i;
    for(i=0;b[i]!='\0';i++)
        {
            if(a[i]>b[i])return 0;
            else if(a[i]==b[i]);
            else return 1;             
        }
}
