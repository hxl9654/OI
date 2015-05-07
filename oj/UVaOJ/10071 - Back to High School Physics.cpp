#include<stdio.h>
int main()
{
    int a,b,a1=99999999,b1=9999999;
    for(;;)
      {
          scanf("%d%d",&a,&b);
          if(a1==a&&b1==b)break;
          printf("%d\n",b*a*2);
          a1=a;b1=b;
      }
    return 0;
}
