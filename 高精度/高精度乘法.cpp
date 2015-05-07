#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char t[100] = { 0 };
	int a[100] = { 0 }, b[100] ={0}, c[10000] ={0}, flag = 0, i, lena, lenb, len, f = 0, j;
	scanf("%s", t);
	lena = strlen(t);
	for (i = 0; i < lena; i++)
		a[i] = t[lena - i - 1] - '0';
	scanf("%s", t);
	lenb = strlen(t);
	for (i = 0; i < lenb; i++)
		b[i] = t[lenb - i - 1] - '0';
	for (i = 0; i < lena; i++)
		for (j = 0; j < lenb||flag!=0; j++)
		{
			c[j + i] = c[j + i] + (a[i] * b[j] + flag);
			flag = 0;
			if (c[j + i] >= 10)
			{
				flag = c[j + i] / 10;
				c[j + i] = c[j + i] % 10;
			}
		}
	for (i = 9999; i >= 0; i--)
	{
		if (c[i] != 0 || f == 1)
		{
			f = 1;
			printf("%d", c[i]);
		}
	}
	system("pause");
	return 0;
}
