#include<stdio.h>
char temp[10000]={'\0'};
int main()
{
    int n,i,j,cnt=0;
    char map[50]={'\0'};
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        for(j=0;temp[j-1]!='\n';j++)
            temp[j]=getchar();
        for(j=0;map[j-1]!='\n';j++)
            map[j]=getchar();
        printf("%d ",i+1);
        for(j=0;temp[j]!='\0'&&temp[j]!='\n';j++)
        {
            if(temp[j]=='\0'||temp[j]=='\n')break;
            else if(temp[j]==' ')cnt++;
            else if(temp[j]>='A'&&temp[j]<='Z'){if(cnt>0)while(cnt--)putchar(' ');printf("%c",map[temp[j]-'A']);}
            else if(temp[j]>='a'&&temp[j]<='z'){if(cnt>0)while(cnt--)putchar(' ');printf("%c",map[temp[j]-'a']);}
        }
        printf("\n");
    }
    return 0;
}

