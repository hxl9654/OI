#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,l,u,n,o,i;
    l=0;
    u=0;
    n=0;
    o=0;
    printf("�������ַ���\n");
    for(i=1;(c=getchar())!='\n';i++)
    {
     if(c>='a'&&c<='z')l=l+1;
     else if(c>='A'&&c<='Z')u=u+1;
     else if(c>='1'&&c<='9')n=n+1;
     else o=o+1;                              
    }
    
    
    printf("Сд��ĸ%d��,��д��ĸ%d��,����%d��,�����ַ�%d��\n",l,u,n,o);
    
    
    
    system("pause");
    return 0;
}
