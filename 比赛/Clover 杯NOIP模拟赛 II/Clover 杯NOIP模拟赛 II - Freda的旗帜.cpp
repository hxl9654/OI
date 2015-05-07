#include<stdio.h>
#include<stdlib.h>
short a[1001]={0};
char color[10][11]={0};
int c,flag;
unsigned long long n;
void slove(int x,int y,int z)
{    
    int i;
    if(flag==1)return ;
    if(x==0)
        {
            n--;
            if(n<=0)
               {
                    flag=1;
                    printf("%d\n",z);
                    return ;
               }
            return;
        }
    for(i=0;i<c;i++)
        if(y==0||color[i][a[y-1]-1]=='1'){a[y]=i+1;slove(x-1,y+1,z);}    
}
int main()
{
    int i,j;
    scanf("%I64u%d",&n,&c);   
    for(i=0;i<c;i++)
        scanf("%s",color[i]);
    for(i=1;i<1000&&n>0;i++)
        slove(i,0,i);
    system("pause");
    return 0;
}
