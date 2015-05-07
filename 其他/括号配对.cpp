#include<stdio.h>
int top = 0;
char a[1000] = { 0 };

char out()
{
	top--;
	return a[top];
}

void in(char c)
{
	a[top] = c;
	top++;
}

int main()
{
	char c, d;
	in('#');
	for (;;)
	{
		c = getchar();
		if (c == '(' || c == '[' || c == '{')
			in(c);
		else
		{
			d = out();
			if (d == '#')
			{
				printf("ok");
				return 0;
			}
			else if (!
					 ((d == '(' && c == ')') || (d == '[' && c == ']')
					  || (d == '{' && c == '}')) || c == '\n')
			{
				printf("fail");
				return 0;
			}
		}
	}
}
