/*求大于整数m且紧靠m的k个素数*/
/*例如：若输入17,5,则输出：19，23，29，31，37*/ 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{   
    int t=0,a=0,m=0,k=0;
    printf("输入 m k\n");
    scanf("%d%d",&m,&k);
    for(m++;a<k;m++)
       {  t=0;
          for(int i=2;i<sqrt(m)+5;i++)
              if(m%i==0){t=1;break;}
          if(t==0){a++;printf("%d ",m);}
       }
    system("pause");
    return 0;
}
