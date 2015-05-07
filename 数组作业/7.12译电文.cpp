/*译电文:有一行电文，已按下面规律译成密码
  A——Z   a——z
  B——Y   b——y
  C——X   c——x
  ……     ……
  
  密码：R droo erhrg Xsrmz  mvcg  dvvp.
  原文：I  will  visit  China  next  week.*/ 
#include<stdio.h>
#include<stdlib.h>

int main()
{
   char a='\0';
   char t='\0';
   for(;;)
       {
          a=getchar();
          if(a>='a'&&a<='z'){t=a-'a';a='z'-t;}
          else if(a>='A'&&a<='Z'){t=a-'A';a='Z'-t;}
          printf("%c",a);
          if(a=='\n')break;
       }
   system("pause");
   return 0;
}
