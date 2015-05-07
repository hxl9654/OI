#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ch[26]={0},i,max=0,low=101,temp;
    char name[100]={'\0'};
    scanf("%s",name);
    for(i=0;name[i]!='\0';i++)
        ch[name[i]-'a']++;
    for(i=0;i<26;i++)
        {
            if(ch[i]>max)max=ch[i];
            if(ch[i]<low&&ch[i]!=0)low=ch[i];                  
        }
    temp=max-low;
    if(temp<2){printf("No Answer\n0");return 0;}
    for(i=2;i<temp;i++)
        if(temp%i==0){printf("No Answer\n0");return 0;}
    printf("Lucky Word\n%d",temp);
    system("pause"); 
    return 0;
}
