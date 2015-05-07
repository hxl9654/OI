#include<stdio.h>
#include<stdlib.h>
int inf[300000][2]={0},n,out[300000]={0},ch[300000]={0};
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int i,t1,t2,j,ou=0;
    long long o=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {   
           scanf("%d",&inf[i][0]);
           inf[i][1]=i;
           //ch[i]=0;
        }
    for(;;)
       {    
           if(scanf("%d%d",&t1,&t2)==EOF)break;
           if(ch[t1-1]==0&&ch[t2-1]==0)ch[t1-1]=t2-1;
           else if(ch[t1-1]!=0&&ch[t2-1]==0)ch[t2-1]=ch[t1-1];
           else if(ch[t1-1]==0&&ch[t2-1]!=0)ch[t1-1]=ch[t2-1];
           else {for(i=0;i<n;i++)if(ch[i]==ch[t1-1])ch[i]=ch[t2-1];}
           //for(i=0;i<n;i++)printf("ch:%d %d\n",i,ch[i]);
           //putchar('\n');
       }
    for(i=0;i<n;i++)
        if(ch[i]!=0)inf[i][1]=ch[i];
    //for(i=0;i<n;i++)
        //printf("inf:%d %d\n",inf[i][0],inf[i][1]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(out[i]<inf[j][0]&&inf[j][1]==i)out[i]=inf[j][0];
    for(i=0;i<n;i++)
        {o=o+out[i];if(out[i]!=0)ou++;}
    printf("%d\n%d\n",ou,o);
    //system("pause");
    return 0;
}
