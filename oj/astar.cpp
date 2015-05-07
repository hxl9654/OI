

#include<stdio.h>
int main()
{
	int n, out, i, j, t, a;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &t);
		out = 0;
		for (j = 0; j < t; j++)
		{
			scanf("%d", &a);
			out = out + a;
		}
		out = out - t + 1;
		printf("%d\n", out);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	float t, out = 0;
	int i;
	for (i = 0; i < 12; i++)
	{
		scanf("%f", &t);
		out = out + t;
	}
	out = out / 12;
	if (((int)(out * 100)) % 10 > 5)
		out = (out * 100 + 1) / 100;
	printf("$%.2f", out);
	return 0;
}

#include<stdio.h>
int main()
{
	int n, t1, t2, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d:%d", &t1, &t2);
		if (t2 != 0)
			printf("0\n");
		else
		{
			t1 = t1 + 12;
			if (t1 > 24)
				t1 = t1 - 24;
			printf("%d\n", t1);
		}
	}
	return 0;
}

#include<stdio.h>
int main()
{
	char stl[1000] = { '\0' };

	while (scanf("%[^\n]%*c", stl) != EOF)
		printf("%s\n", stl);
	return 0;

}

#include<stdio.h>
int main()
{
	char a[200] = { '\0' };
	int i, fa, fb;
	fa = 0;
	fb = 0;
	gets(a);
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == '_')
			fa = 1;
		else if (a[i] >= 'A' && a[i] <= 'Z')
			fb = 1;
		if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')
			|| a[i] == '_');
		else
			fa = fb = 1;
		if (a[i] == '_' && (a[i + 1] == '_' || a[i + 1] == '\0'))
			fa = fb = 1;
	}
	if (a[0] == '_' || (a[0] <= 'Z' && a[0] >= 'A'))
	{
		fa = fb = 1;
	}
	if (fa == 1 && fb == 1)
	{
		printf("Error!");
		return 0;
	}
	else if (fa == 0 && fb == 0)
	{
		printf("%s", a);
		return 0;
	}
	else if (fa == 1)
	{
		for (i = 0; a[i] != '\0'; i++)
			if (a[i] == '_')
				a[i + 1] = a[i + 1] - 32;
			else
				printf("%c", a[i]);
		return 0;
	}
	else if (fb == 1)
	{
		for (i = 0; a[i] != '\0'; i++)
			if (a[i] >= 'A' && a[i] <= 'Z')
				printf("_%c", a[i] + 32);
			else
				printf("%c", a[i]);
		return 0;
	}
	return 0;
}
