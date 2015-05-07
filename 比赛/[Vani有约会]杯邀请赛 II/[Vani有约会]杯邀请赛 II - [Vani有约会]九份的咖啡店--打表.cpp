#include<stdio.h>
#include<stdlib.h>
int a[1000000]={0};
unsigned long long out=0,ans=0;
void ansf()
{
    int i;
    ans=0;
    for(i=0;a[i]!=0;i++)
        ans=ans+a[i];          
}
int cheak(int x)
{
    int i,j;
    for(i=0;a[i]!=0;i++)
        for(j=2;j<=a[i]&&j<=x;j++)
            if((a[i]%j==0&&x%j==0)||a[i]==x)return 0;
    return 1;
}
void slove(int x,int y,int z)
{
    int i,j;
    a[z]=x;
    for(i=2;i<=y;i++)
        {//for(j=0;j<10;j++)printf("%d ",a[j]);printf("\n");
            if(cheak(i)==1)slove(i,y,z+1);
            ansf();
            if(ans>out)out=ans;
            a[z+1]=0;
        }
}
int main()
{
    FILE *fout=fopen("out.txt","w");    
    int n=29,i,j;
       printf("%d ",n);
       for(i=2;i<=n;i++)
           {
              slove(i,n,0);
              if(ans>out)out=ans;
           }//for(j=0;j<100;j++)printf("%d ",a[j]);printf("\n");}
       fprintf(fout,"%I64d\n",out+1);printf("%I64d\n",out+1);
    //system("pause");
    return 0;
}
