#include<stdio.h>
#include<stdlib.h>
int a[2000][4]={0},h[2000][3]={0},s[2000][3]={0};
int main()
{
    int m,n,c,l,d,i,j=0,k=0,t,e,hi=0,whi;
    scanf("%d%d%d%d%d",&m,&n,&c,&l,&d);
    for(i=0;i<d;i++)
        scanf("%d%d%d%d",&a[i][0],&a[i][1],&a[i][2],&a[i][3]);
    for(i=0;i<d;i++)
        if(a[i][0]!=a[i][2]){h[k][0]=a[i][0];h[k][1]=a[i][2];k++;}
        else {s[j][0]=a[i][1];s[j][1]=a[i][3];j++;}
    if(k+1==l)
        for(i=0;i<k;i++)
           {
              if(h[i][0]>h[i][1])printf("%d ",h[i][1]);
              else printf("%d ",h[i][0]);
           }
    else 
        {
            for(i=0;i<k;i++)
                if(h[i][0]>h[i][1])h[h[i][1]][2]++;
                else h[h[i][0]][2]++;
            for(i=0;i<c;i++)
                {
                    hi=0;
                    for(e=0;e<m;e++)
                       if(h[e][3]>hi){hi=h[e][3];whi=e;}                    
                    printf("%d ",whi);
                    h[whi][3]=0;
                }            
        }
    printf("\n");
    if(j+1==c)
        for(i=0;i<j;i++)
           {
              if(s[i][0]>s[i][1])printf("%d ",s[i][1]);
              else printf("%d ",s[i][0]);
           }
    else 
        {
            for(i=0;i<j;i++)
                if(s[i][0]>s[i][1])s[s[i][1]][2]++;
                else s[s[i][0]][2]++;
            for(i=0;i<l;i++)
                {
                    hi=0;
                    for(e=0;e<n;e++)
                       if(s[e][3]>hi){hi=s[e][3];whi=e;}                    
                    printf("%d ",whi);
                    s[whi][3]=0;
                }            
        }
    printf("\n");
    system("pause");
    return 0;
}
