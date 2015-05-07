#include<stdio.h>
int main()
{
    int a[12]={0},i,save=0,out=0;
    for(i=0;i<12;i++)
        {
            scanf("%d",&a[i]);         
        }
    for(i=0;i<12;i++)
       {
            save=save+300;
            save=save-a[i];
            if(save<0){out=-(i+1);break;}
            if(save>=100){save=save%100;out=out+save/10;}
       }
    if(out<0)printf("%d",out);
    else printf("%d",save*100);
    return 0;
} 
