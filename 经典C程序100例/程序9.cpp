//"	������9��
//"	��Ŀ��Ҫ����������������̡�
//"	.�����������i�����У�j�������У�����i+j�ĺ͵ı仯����������ڷ��񣬻��ǰ׷���


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
   int i,j;
   for(i=1;i<9;i++)
     {
      for(j=1;j<9;j++)
       {
        if((i%2!=0&&j%2!=0)||(i%2==0&&j%2==0))printf("��");  
        else printf("��");
        if(j==8)printf("\n");              
       }
     }
    system("pause");
    return 0;
}

