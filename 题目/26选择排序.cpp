/*选择法排序.*/ 
#include<stdio.h>
#include<iostream>
#define N 10 
int main() 
{ int i,j,min,temp,a[N]; 
/*输入数据*/ 
printf("请输入十个数:\n"); 
for (i=0;i<N;i++) 
{ printf("a[%d]=",i); 
scanf("%d",&a[i]); 
} 
printf("\n"); 
for(i=0;i<N;i++) 
printf("%5d",a[i]); 
printf("\n"); 
/*排序*/ 





/*输出*/ 
printf("\n排序结果如下:\n"); 
for(i=0;i<N;i++) 
printf("%5d",a[i]); 
system("pause");
return 0;
} 
