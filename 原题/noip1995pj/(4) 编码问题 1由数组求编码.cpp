#include<stdio.h>
#include<stdlib.h>
int b[10000]={0},a[10000]={0},i,f=0;
int main()
{
    void p(int);
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
       {
        scanf("%d",&a[i]);

        p(a[i]);
        b[i]=f;
        f=0;
       }
    for(i=0;i<n;i++)
       printf("%d ",b[i]);
    system("pause");
    return 0;
}
void p(int c)
{
   int j;
   f=0;
   for(j=0;j<i;j++)
       if(c>a[j])f++;        
}
