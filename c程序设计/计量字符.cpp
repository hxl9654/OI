#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,l,u,n,o,i;
    l=0;
    u=0;
    n=0;
    o=0;
    printf("请输入字符串\n");
    for(i=1;(c=getchar())!='\n';i++)
    {
     if(c>='a'&&c<='z')l=l+1;
     else if(c>='A'&&c<='Z')u=u+1;
     else if(c>='1'&&c<='9')n=n+1;
     else o=o+1;                              
    }
    
    
    printf("小写字母%d个,大写字母%d个,数字%d个,其他字符%d个\n",l,u,n,o);
    
    
    
    system("pause");
    return 0;
}
