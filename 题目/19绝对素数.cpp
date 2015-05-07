/*绝对素数： 一个自然数是素数，且它的数字位置经过任意对换后仍为素数，则称为绝对素数。*/
/*例如13，试找出所有两位的绝对素数*/ 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,e=sqrt(n)+5,t=0,nt;
    for(n=10;n<100;n++)
       { 
         for(int i=2;i<e&&t==0&&i<n;i++)
            if(n%i==0){t=1;break;}
         nt=n%10*10+n/10;
         for(int i=2;i<e&&t==0&&i<n;i++)
            if(nt%i==0){t=1;break;}
         if(t==0)printf("%d ",n);
         t=0;
       }
    system("pause");
    return 0;
}
