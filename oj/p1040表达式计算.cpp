#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char t[10000]={0};
int a[10000]={0},b[10000]={0},flag=0,i,lena=0,lenb,end=0,flag1,flag3=0,flag4=1;
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
   for(;end==0;memset(b,0,sizeof(b)))
      { 
        for(i=0;;i++)
          {
              if(scanf("%c",&t[i])==EOF||t[i]=='\n'){t[i]='\0';end=1;break;}
              if(t[i]=='+'){t[i]='\0';flag1=1;break;}
              if(t[i]=='-'){t[i]='\0';flag1=2;break;}
          }
        
        flag=0;
        lenb=strlen(t);   
        for(i=0;i<lenb;i++)
           b[i]=t[lenb-i-1]-'0';
        if(flag4==1)
          for(i=0;i<=lena+5||i<lenb||flag==1;i++,lena=(lena<i?lena:i))
            {
               a[i]=a[i]+b[i]+flag;
               flag=0;
               if(a[i]>=10){flag=1;a[i]=a[i]-10;}
            }
        if(flag4==2)  
          for(i=0;i<=lena+5||i<lenb||flag==-1;i++,lena=(lena<i?lena:i))
            {
              a[i]=a[i]-b[i]+flag;
              flag=0;
              if(a[i]<0){flag=-1;a[i]=a[i]+10;}                            
            }
        flag4=flag1;
      }
    flag=0;
    for(i=1500;i>=0;i--)
        if(a[i]!=0||flag==1){printf("%d",a[i]);flag=1;}
    if(flag==0)printf("0\n");
    system("pause");
    return 0;
}
