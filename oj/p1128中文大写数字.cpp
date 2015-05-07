#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char a[20]={0},b[10][10]={{"\0"},{"shi"},{"bai"},{"qian"},{"wan"},{"shi"},{"bai"},{"qian"},{"yi"},{"shi"}};
int main()
{
    int i,len,j,flag=0,flag2=0,tj=0;
    scanf("%s",a);
    len=strlen(a);
    for(i=0,j=len-1;i<len;i++,j--)
        if(a[i]!='0'||flag!=0)
           if(a[i]!='0')
              {
                   if(flag2==1&&tj>3)printf("%s",b[tj]);
                   if(flag2==1&&j!=3)printf("0");
                   flag2=0;
                   tj=0;
                   flag=1;
                   printf("%c%s",a[i],b[j]);
              }
           else
              {
                   if(tj==0)tj=j;
                   flag2=1;
                   flag=1;
              }
    if(flag==0)printf("0");
    system("pause");
    return 0;
}
