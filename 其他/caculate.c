#include<stdio.h>
#include<stdlib.h>


int main()
{
	freopen("caculate.in","r",stdin);
	freopen("caculate.out","w",stdout);
	
	int a[4],flag;
	int i;
	int sum = 0;
	scanf("%d",&a[0]);
	sum = a[0];
	
	for(i = 1 ;i <= 4 ;i++)
	{
			
			scanf("%d",&flag);
			scanf("%d",&a[i]);
			if(flag == 0)sum += a[i];
			else sum -= a[i];
			//printf("%d ",sum);
			
	}
	printf("%d\n",sum);
	return 0;
}

