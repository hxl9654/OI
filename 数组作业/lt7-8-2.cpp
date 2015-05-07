#include<stdio.h>
#include<stdlib.h>

int main()
{
    char a[80][80]={'\0'};
    int n=0;
    for(int i=0;i<80;i++)
        a[i][0]='\n';
    for(int i=0;i<80;i++)
        {
            scanf("%s",a[i]);
            if(getchar()=='\n')break;
        }
    for(int i=0;i<80;i++)
        if(a[i][0]!='\n')n++;
    printf("%d\n",n);
    system("pause");
    return 0;
}
