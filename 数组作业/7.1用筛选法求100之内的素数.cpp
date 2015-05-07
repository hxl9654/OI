/*用筛选法求100之内的素数*/ 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[101]={0};
    for(int i=1;i<100;i++)
       a[i]=i;
    a[0]=0;
    a[1]=0;
    for(int i=0;i<101;i++)
        for(int j=0;j<i;j++)
          {
            if(a[i]==0)break;
            if(a[j]==0)continue;
            if(a[i]%a[j]==0){a[i]=0;break;}
          }  
    for(int i=0;i<101;i++)
       if(a[i]!=0)printf("%d ",a[i]);
    system("pause");
    return 0;    
}
