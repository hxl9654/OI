#include<stdio.h>
#include<stdlib.h>
#define len sizeof(struct student)
struct student
{
	long int num;
	double score;
	struct student *next;
} *pin,*pout;
void input()
{
    struct student *p;
    p=(struct student *)malloc(len);
    if(pin!=NULL)pin->next=p;
    p->next=NULL;
    pin=p;
    printf("����ѧ�š��ɼ�\n");
    scanf("%ld%lf",&p->num,&p->score);
    if(pout==NULL)pout=p;
    return  ;
}
void output()
{
    if(pout==NULL){printf("��\n");return ;}
    struct student *p;
    printf("ѧ��%ld �ɼ�%.2lf\n",pout->num,pout->score);
    p=pout;
    pout=pout->next;    
    if(p->next==NULL){pin=NULL;pout=NULL;}
    free(p);
    return ;
}
int main()
{
	char c;
	pin=pout=NULL;
	for (;;)
	{
		fflush(stdin);
		printf("1��2��3��\n");
		c=getchar();
		if(c=='3')break;
		else if(c=='2')output();
		else if(c=='1')input();
		else printf("����\n");
	}
    return 0;
}
