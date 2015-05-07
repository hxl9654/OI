/*字符串复制
编写一个程序，将字符组s2中的全部字符复制到字符组s1中，不用strcpy函数。复制时'\0'也要
复制过去，'\0'后面的字符不复制。*/ 
#include<stdio.h>
#include<stdlib.h>

int main()
{
   char a[10000]={'\0'},b[10000]={'\0'};
   int i; 
   gets(a);
   for(i=0;a[i]!='\0';i++)
       b[i]=a[i];
   b[i]='\0';  
   printf("%s",b);
   system("pause");
   return 0;
}
