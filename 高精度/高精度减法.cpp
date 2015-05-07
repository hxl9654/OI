#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char t[100]={0},a[100]={0},b[100]={0},c[100]={0};
    int flag=0,i,lena,lenb,len,f=0;
    scanf("%s",t);
    lena=strlen(t);
    for(i=0;i<lena;i++)
        a[i]=t[lena-i-1]-'0';
    scanf("%s",t);
    lenb=strlen(t);
    for(i=0;i<lenb;i++)
        b[i]=t[lenb-i-1]-'0';
    if(strcmp(a,b)<0)
    {strcpy(t,a);strcpy(a,b);strcpy(b,t);printf("-");}
////////////////////////////////////////////////////////////////////// 
    for(i=0;i<lena||i<lenb;i++)
        {
            c[i]=a[i]-b[i]+flag;
            flag=0;
            if(c[i]<0){flag=-1;c[i]=c[i]+10;}                            
        }
    if(lena>lenb)len=lena;
    else len=lenb;
    if(c[len]==0)i=len-1;
    else i=len;
    for(;i>=0;i--)
        if(c[i]!=0||f!=0){f=1;printf("%d",c[i]);}
    system("pause");
}
