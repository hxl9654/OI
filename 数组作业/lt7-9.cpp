/*找出三个字符串的最大者*/ 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[3][80],temp[80];
    gets(a[0]);
    gets(a[1]);
    gets(a[2]);
    if(strcmp(a[0],a[1])>=0)strcpy(temp,a[0]);
    else strcpy(temp,a[1]);
    if(strcmp(a[2],temp)>=0)strcpy(temp,a[2]);
    puts(temp);
    
    system("pause");
    return 0;
    }
