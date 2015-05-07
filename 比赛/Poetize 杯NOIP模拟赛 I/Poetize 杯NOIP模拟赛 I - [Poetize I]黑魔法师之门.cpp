#include <stdio.h>
#include <stdlib.h>
int num[300001], father[300001];
void Make_Set(int x)
{
	father[x] = -1;
	num[x] = 1;
}
 
int Find_Set(int x)
{
	int r = x, tmp; 
	while (father[r] != -1)
	{
		r = father[r];
	}
	while (x != r)
	{
		tmp = father[x];
		father[x] = r;
		x = tmp;
	}
	return x;
}
 
void Union_Set(int a, int b)
{
	a = Find_Set(a);
	b = Find_Set(b);
	if (a == b) return;
	if (num[a] <= num[b])
	{
		father[a] = b;
		num[b] += num[a];
	}
	else
	{
		father[b] = a;
		num[a] += num[b];
	}
}
 
int main()
{
	int a, b, n, m, t,ans=0;
	int i, j;
	while (1)
	{
		scanf("%d%d", &n, &m);
		if (n + m == 0) break;
		for (i = 0; i < n; i++)
		{
			Make_Set(i);	
		}
		for (i = 0; i < m; i++)
		{
			scanf("%d%d", &a,&b);
            if(Find_Set(a)==Find_Set(b))
            {ans++;ans=ans*2;ans--;}
			Union_Set(a, b);
			printf("%d\n",ans);
			if(i==m-1)return 0;
		}
	}
	return 0;
}
