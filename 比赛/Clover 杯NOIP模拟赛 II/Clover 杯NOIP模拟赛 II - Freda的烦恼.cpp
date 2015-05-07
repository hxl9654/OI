#include<stdio.h>
#include<stdlib.h>
int inf[100000][4]={0};
long long ans1=0,ans2=0,out=0;
int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
       scanf("%d%d%d%d",&inf[i][0],&inf[i][1],&inf[i][2],&inf[i][3]);
    for(i=0;i<n;i++)
        {
            ans1=inf[i][3];
            if(inf[i][0]+m>inf[i][1])
                {       
                      ans1=ans1+inf[i][2]*m;
                      if(m%(inf[i][1]-inf[i][0])==0)ans2=inf[i][3]*m/(inf[i][1]-inf[i][0]);
                      else ans2=inf[i][3]*(int)(m/(inf[i][1]-inf[i][0]))+inf[i][3];          
                      if(ans1<ans2)out=out+ans1;
                      else out=out+ans2;           
                }
            else out=out+ans1;
        }
    printf("%I64d\n",out);
    system("pause");
    return 0;
}
