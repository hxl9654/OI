//【程序20】
//题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；
//再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
   double h[10]={0},h1;
   h[0]=100.0;
   for(int i=1;i<10;i++)
      h[i]=(h[i-1]/2);
   h1=h[0];
   for(int i=1;i<10;i++)
      h1=h1+h[i]*2;
   printf("%lf %lf\n",h[9],h1);
   system("pause");
   return 0;
}
