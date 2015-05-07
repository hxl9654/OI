#include<stdio.h>
#include<stdlib.h>
int w[300]={0},n,inf[300][4]={0},i,j,k,root[300]={0},f;
int main()
{    
    int ti,tj,tn,s=0,ro;
    scanf("%d",&n);
    for(i=0;i<n;i++)    
        {
            scanf("%d",&w[i]);
            root[i]=i;
        }
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&inf[i][j]);
    for(i=0;i<n;i++)
        for(j=0;j<n-1;j++)
            {
               if(inf[i][j]<tn){ti=i;tj=j;tn=inf[i][j];}
            }                
    inf[ti][tj]=999999;
    root[ti]=tj;
    s=tn;
    ro=tj;
    for(k=0;k<n-1;k++)
       {
          f=0;
          tn=99999999;
          for(i=0;i<n;i++)
             for(j=i+1;j<n;j++)
                {
                   if(root[i]!=ro&&root[j]!=ro)continue;
                   if(inf[i][j]<tn){ti=i;tj=j;tn=inf[i][j];f=1;}
                }                
          if(f==1)
          {
            inf[ti][tj]=999999; 
            root[ti]=ro;
            root[tj]=ro;
            s=s+tn;
          }
       }
    tn=999999;
    for(i=0;i<n;i++)
        if(w[i]<tn)tn=w[i];
    s=s+tn;
    printf("%d\n",s);
    system("pause");
    return 0;
    
}
/*for(i=0;i<n;i++)
        for(j=0;j<n-i-1;j++)
            if(root[i][)*/
