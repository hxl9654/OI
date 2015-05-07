/*我国古代数学家张丘建在“算经”里提出一个世界数学史上有名的百鸡问题：鸡翁一、值钱五、
鸡母一、值钱三，鸡雏三、值钱一，百钱买百鸡，问鸡翁、母、雏各几何？
    分析：若公鸡x只，母鸡y只，小鸡z只，依题意可以列出以下方程组：
 x+y+z=100    5x+3y+x/3=100 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int i,j,k;
for(i=0;i<21;i++)
   for(j=0;j<34;j++)
      for(k=0;k<101;k++)
         if(k%3==0)
            if( (i+j+k==100)&&(5*i+3*j+k/3==100) )
                printf("%d %d %d\n",i,j,k);

system("pause");    
return 0;
}
