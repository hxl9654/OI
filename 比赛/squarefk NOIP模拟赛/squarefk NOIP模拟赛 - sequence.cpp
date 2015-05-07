#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
short int a[10000000]={0};
char t[10000000]={0};
int p[8220]={0},l=0;
int fp()
{
    int k;
    for(k=l;k<8220;k++)
        if(p[k]!=0){l=k+1;return p[k];}
}
int main()
{
    int T,k,n,lena,i,j,flag,lent,f;
    double sqrt_n;
    for(i=1;i<8210;i++)
       {
          p[i]=i;
       }
    p[0]=p[1]=0;
    sqrt_n=sqrt(8210);
    for(i=2;i<sqrt_n+1;i++)
       {
          for(j=i+1;j<8210;j++)
             {
                   if(p[i]!=0&&p[j]!=0)
                        if(p[j]%p[i]==0)p[j]=0;
             }
       }

    scanf("%d",&T);    
    for(k=0;k<T;k++)
        {
            l=0;
            flag=0;
            memset(a,0,sizeof(a));
            memset(t,0,sizeof(t));
            scanf("%d%s",&n,t);
            lena = strlen(t);
            for(int b=1;b<n;b++);
	            {
                      for (j = 0; j < lena; j++)
		                   a[j] = t[lena - j - 1] - '0';
	                  f=fp();
	                  a[0]=a[0]+f;
                      for(i=0;flag!=0;i++)
                            {
                                a[i]=a[i]+flag;
                                flag=0;
                                if(a[i]>=10){flag=a[i]/10;a[i]=a[i]%10;}                            
                            }
                      lena = strlen((char*)a);
                      a[0]=a[0]*f;
                      for(i=0;flag!=0;i++)
                            {
                                a[i]=a[i]+flag;
                                flag=0;
                                if(a[i]>=10){flag=a[i]/10;a[i]=a[i]%10;}                            
                            }
                      lena = strlen((char*)a);
                }
            memset(t,0,sizeof(t));
            scanf("%s",t);
            flag=1;
            for(i=0;i<100;i++)
            printf("%d",a[i]);
            if(lena!=lent)printf("NO\n");
            else 
                {
                    for(i=0;i<lena;i++)
                        if(a[i]!=t[lena-i-1]-'0'){flag=0;printf("NO\n");break;}
                    if(flag==1)printf("YES\n");
                }            
        }
    system("pause");
    return 0;
}
