#include<stdio.h>
#include<stdlib.h>
char w[100]={0};
int time[10010]={0},n,tw[26]={0},k=0;
long long tm,tu=0;
int main()
{
    int i,j,t;
    scanf("%lld%d",&tm,&n);
    for(i=0;i<26;i++)
        scanf("%d",&tw[i]);
    for(i=0;i<n;i++)
       {
            scanf("%s",w);
            for(j=0;w[j]!='\0';j++)
                {
                    if(w[j]-'a'>=0)time[k]=time[k]+tw[w[j]-'a'];
                    else time[k]=time[k]+tw[w[j]-'A'];
                }
            tu=tu+time[k];
            k++;
       }
    if(tu<=tm)
        {
              printf("Yes\n%lld\n",tm-tu);
              system("pause");
              return 0;
        }
    else 
        {
           k=0;
           for(i=0;i<n;i++)
               for(j=0;j<n-i-1;j++)
                   if(time[j]>time[j+1])
                       {
                           t=time[j];
                           time[j]=time[j+1];
                           time[j+1]=t;
                       }
            for(i=0;i<n;i++)
                {
                    if(tm-time[i]>=0)
                        {
                             k++;
                             tm=tm-time[i];
                        }        
                    else 
                        {
                             printf("No\n%d\n",k);
                             system("pause");
                             return 0;    
                        }
                }
        }
    system("pause");
    return 0;
}
