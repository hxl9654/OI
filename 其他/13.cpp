#include<stdio.h>
#include<stdlib.h>
int a[13]={0};
int cheak()
{
	int i;
	for (i = 0; i < 13; i++)
		if (a[i] == 0)
			return 0;
	return 1;
}

int main()
{
	int i = 0, j = 0, out;
	for (;; i++,j++)
	{
		j = j % 3;
		i=i%13;
		if (j == 2 && a[i] == 0)
		{
			a[i] = 1;
			out = i % 13 + 1;
		}
		else if (j == 2)
			j--;
		//printf("%d ",cheak());
		if (cheak())
			break;
	}
	printf("%d\n", out);
	system("pause");
	return 0;
}
