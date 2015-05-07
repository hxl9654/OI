/*连接两个字符串(不用'stract')
字符串1：country
字符串2：side
countryside
*/ 
#include<stdio.h>
#include<stdlib.h>
int main()
{
   char a[]={'c','o','u','n','t','r','y'},b[]={'s','i','d','e'},c[50];
   int n=0;
   int sa=sizeof(a);
   int sb=sizeof(b);
   for(int i=0;i<sa;i++,n++)
       c[n]=a[i];
   for(int i=0;i<sb;i++,n++)
       c[n]=b[i];
   c[n]='\0';
   puts(c);
   system("pause");
   return 0;
}
