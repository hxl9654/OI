#include<stdio.h>
#include<string.h>
int main()
{
    char a[200]={'\0'};
    int i,n,n1=0,n2=0;
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<n;i++)
        if(a[i]>='a'&&a[i]<='z')
            n1++;
        else n2++;
    //printf("%d %d\n",n1,n2);
    if(n1 < n2)
        {
            for(i=0;i<n;i++)
                if(a[i]>='a'&&a[i]<='z')
                    a[i] -= 32;
        }

    else
        {
            for(i=0;i<n;i++)
            if(a[i]>='A'&&a[i]<='Z')
                a[i] += 32;
        }


    printf("%s",a);
    return 0;
}

