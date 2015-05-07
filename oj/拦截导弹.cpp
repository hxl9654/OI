#include<stdio.h>
int main()
{
	int inf[20] = { 0 }, a[20] ={0}, b[20] =	{0}, out = 0, flag = 0, n, tj, i, j;
	for (i = 0; i < 20; i++)
	{
		scanf("%d", &inf[i]);
		if (getchar() == '\n')
			break;
	}
	n = i + 1;
	for (i = n - 1; i >= 0; i--)
		for (j = n - 1; j >= i; j--)
			if ((inf[i] > inf[j] || i == j) && a[i] <= a[j])
				a[i] = a[j] + 1;
	for (i = 0; i < n; i++)
		if (out < a[i])
			out = a[i];
	printf("%d,", (out+1)/2);
	out = 0;
	for (i = 0; i < n; i++)
	{
		flag = 0;
		for (j = 0; j < n && b[j] != 0; j++)
		{
			if (flag == 0 && b[j] > inf[i])
			{
				flag = 1;
				tj = j;
			}
			if (flag == 1 && b[j] < b[tj] && b[j] > inf[i])
				tj = j;
		}
		if (flag == 0)
		{
			b[j] = inf[i];
			out++;
		}
		else
		{
			b[tj] = inf[i];
		}
	}
	printf("%d", out - 1);
	return 0;
}
