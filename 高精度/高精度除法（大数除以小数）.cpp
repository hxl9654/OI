#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char t[10000] = { 0 };
	int a[10000] = { 0 }, c[10000] ={0}, flag = 0, i, lena, f = 0, j;
	long long b=0, bei=0,yu=0;
	scanf("%s%I64d", t,&b);
	lena = strlen(t);
	for (i = 0; i < lena; i++)
		a[i] = t[lena - i - 1] - '0';
	for(i=lena-1;i>=0;i--)
	    {
            bei=yu*10+a[i];
            c[i]=bei/b;
            yu=bei%b;
        }
     printf("…Ã:");
     for (i = 9999; i >= 0; i--)
	    {
		    if (c[i] != 0 || f == 1)
		    {
		    	f = 1;
			    printf("%d", c[i]);
		    }
	    }
     printf("\n”‡:%I64d",yu);
     system("pause");
     return 0;
}
