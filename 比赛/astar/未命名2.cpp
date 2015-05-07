#include<stdio.h>
int main()
{
    unsigned long int a,b,x,i,j,k,out=0;
    int n,f;
    scanf("%d",&n);
    for(i=0;i<n;i++)
      {
          scanf("%ld%ld%ld",&x,&a,&b);
          out=0;
          for(j=a;j<=b;j++)
            {
               f=0;
               for(k=10;k<=100000000;k=k*10)
                  if(x==j%k)f=1;
               if(f==1)out++;
            }
        printf("%ld\n",out);
      }
      getchar();
      getchar();
    return 0;
}
