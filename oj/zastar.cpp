#include<stdio.h>
int main()
{
	int n, k, i, j, t, out = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &k);
		for (j = 0; j < k; j++)
		{
			scanf("%d", &t);
			out = out + t;
		}
		out = out - k + 1;
		printf("%d\n", out);
		out = 0;
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int i, n;

	float a[12] = { 0 }, s = 0, t;
	for (i = 0; i < 12; i++)
	{
		scanf("%f", &a[i]);
		s = s + a[i];
	}
	t = s / 12;
	n = (int)(t * 1000);
	if (n % 10 > 4)
		t = n / 10 + 1;
	else
		t = n / 10;
	t = t / 100;
	printf("$%.2f\n", t);

	return 0;
}

#include<stdio.h>
int main()
{
	int t, h, m, i;
	scanf("%d", &t);
	for (i = 0; i < t; i++)
	{
		scanf("%d:%d", &h, &m);
		if (m == 0)
			h = h + 12;
		else
			h = 0;
		if (h > 24)
			h = h - 24;
		printf("%d\n", h);

	}

	return 0;
}
