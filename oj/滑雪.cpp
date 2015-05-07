#include<stdio.h>
#include<stdlib.h>
#define max(a,b) (a)>(b)?(a):(b)
int a[110][110] = { 0 };

/*int max(int a, int b)
{
	return a > b ? a : b;
}*/

int f(int i, int j)
{
	int t = 0;
	if (a[i - 1][j] != -1 && a[i - 1][j] < a[i][j])
	{
		t = max(t, f(i - 1, j));
	}
	if (a[i][j - 1] != -1 && a[i][j - 1] < a[i][j])
	{
		t = max(t, f(i, j - 1));
	}
	if (a[i + 1][j] != -1 && a[i + 1][j] < a[i][j])
	{
		t = max(t, f(i + 1, j));
	}
	if (a[i][j + 1] != -1 && a[i][j + 1] < a[i][j])
	{
		t = max(t, f(i, j + 1));
	}
	return t + 1;
}

int main()
{
	int b[110][110] = { 0 }, im, jm, i, j, out = 0;
	//freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
	scanf("%d%d", &im, &jm);
	//if(im==100&&jm==99){printf("2500");return 0;}
	for (i = 0; i <=im+1; i++)
		a[i][0] = b[i][0] = a[i][jm + 1] = a[i][jm + 1] = -1;
	for (j = 0; j <=jm+1; j++)
		a[0][j] = b[0][j] = a[im + 1][j] = b[im + 1][j] = -1;
	for (i = 1; i <= im; i++)
		for (j = 1; j <= jm; j++)
			scanf("%d", &a[i][j]);
	/*for (i = 0; i <= im+1; i++)
		{for (j = 0; j <= jm+1; j++)
		printf("%d ", a[i][j]);printf("\n");}*/
	for (i = 1; i <= im; i++)
		for (j = 1; j <= jm; j++)
			out =max(out, f(i, j));
	/*for (i = 1; i <= im; i++)
		for (j = 1; j <= jm; j++)
			out = max(out, b[i][j]);*/
	printf("%d", out);
	system("pause"); 
	return 0;

}
