#include<stdio.h>
#include<stdlib.h>
int inf[10]={6,2,5,5,4,5,6,3,7,6},n,a[100]={0},t,j=0,f=0,ans=0;
void dfs()
{
    if(t<=0)
        {
            if(f!=2)return ;
            int a1=0,a2=0,a3=0,i;
            for(i=0;i<j&&a[i]!=-1;i++)
                a1=a1*10+a[i];
            for(i++;i<j&&a[i]!=-1;i++)
                a2=a2*10+a[i];
            for(i++;i<j;i++)
                a3=a3*10+a[i];
            if(a3==a1+a2)ans++;
            return ;
        }
    if(n!=t)
        {
            for(int i=0;i<10;i++)
                if(t>=inf[i]){t=t-inf[i];a[j]=i;j++;dfs();t=t+inf[i];j--;}
            if(f==0)
               {
                    a[j]=-1;
                    f++;
                    j++;
                    dfs();
                    j--;
                    f--;
               }
            else if(f==1&&a[j-1]!=-1)
               {
                    a[j]=-1;
                    f++;
                    j++;
                    dfs();
                    j--;
                    f--;     
               }
            else ;
        } 
    else 
        {
            for(int i=0;i<10;i++)
                if(t>=inf[i]){t=t-inf[i];a[j]=i;j++;dfs();t=t+inf[i];j--;}
        }
}
int main()
{
    scanf("%d",&n);
    n=n-4;
    t=n;
    dfs();
    printf("%d",ans);
    system("pause");
    return 0;
}
