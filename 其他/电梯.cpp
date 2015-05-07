#include<stdio.h>
#include<stdlib.h>
int inf[201]={0}, fl[201]={0}, i=0, sta=0, end=0, n=0;
void up(int);
void down(int);
void up(int star)
{//printf("u%d\n",star);system("pause");
if (fl[star + inf[star]] <( fl[star] + 1)&&fl[star + inf[star]]!=-1 )return;
    if(inf[star]==0)return;
	if ((fl[star + inf[star]] > fl[star] + 1 )|| fl[star + inf[star]] == -1)
		fl[star + inf[star]] = fl[star] + 1;
	if ((star + inf[star]+inf[star + inf[star]]) <= n)
		up(star + inf[star]);
	if ((star + inf[star]-inf[star + inf[star]])> 0)
		down(star + inf[star]);
}

void down(int star)
{//printf("d%d\n",star);system("pause");
if(fl[star - inf[star]] <( fl[star] + 1)&&fl[star - inf[star]]!=-1)return;
    if(inf[star]==0)return;
	if ((fl[star - inf[star]] > fl[star] + 1) || fl[star - inf[star]] == -1)
		fl[star - inf[star]] = fl[star] + 1;
	if ((star - inf[star]+inf[star - inf[star]]) <= n)
		up(star - inf[star]);
	if ((star - inf[star]-inf[star - inf[star]])> 0)
		down(star - inf[star]);
}

int main()
{
    freopen("lift.in","r",stdin);
    freopen("lift.out","w",stdout);
	scanf("%d%d%d", &n, &sta, &end);
	for (i = 1; i <= n; i++)
	{
		fl[i] = -1;
		scanf("%d", &inf[i]);
	}
    fl[sta]=0;
	/*	for (i = 1; i <= n; i++)
		{printf("%d ", fl[i]);}
		printf("\n");
		for (i = 1; i <= n; i++)
		{printf("%d ", inf[i]);}printf("\n");*/
	if ((sta + inf[sta]) <= n)up(sta);//printf("un\n");
	if ((sta - inf[sta]) > 0)down(sta);
	//for (i = 1; i <= n; i++)
	//	printf("%d ", fl[i]);
	printf("%d\n", fl[end]);
	return 0;
}
