/*字符串比较:
编一个程序，将两个字符串s1和s2进行比较，如果s1>s2，输出一个正数；如果是s2=s1,输出0；
如果s1<s2,输出一个负数。不要用strcmp函数。两个字符串用gets函数读入。输出正数或负数的绝对值
应是相比较的两个字符串相对应字符的ascll码的差值。例如，'A'与'C'相比，'A'<'C'，应输出负数
，由于'A'与’C‘的acsll差值为2，因此，应输出-2.同理，'Aid'和'And'比较，根据第2个字符的比较
结果，'i'比'n'小5，因此应输出-5*/ 
#include<stdio.h>
#include<stdlib.h>
int main()
{
     int i,out=0;
     char a[1000]={'\0'},b[1000]={'\0'};
     printf("请输入第一个字符串\n");
     gets(a);  
     printf("请输入第二个字符串\n");
     gets(b);  
     if(sizeof(a)>sizeof(b))i=sizeof(b);
     else i=sizeof(a);
     for(int j=0;j<i;j++)
         if(a[j]-b[j]!=0){out=a[j]-b[j];break;}
     printf("%d",out);
     system("pause");
     return 0;
        
}
