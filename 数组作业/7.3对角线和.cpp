/*����n��n�׾���Խ���Ԫ��֮��
1  2  3
4  5  6
7  8  9 */ 
#include<stdio.h>
#include<stdlib.h>

int main()
{
   int a[9]={0},sum=0;
   printf("���������Ԫ��\n");
   for(int i=0;i<9;i++)
       scanf("%d",&a[i]);
       
   sum=a[0]+a[4]+a[8];
   printf("%d\n",sum);
   system("pause");
   return 0;
}
