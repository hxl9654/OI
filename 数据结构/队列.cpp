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
    printf("输入学号、成绩\n");
    scanf("%ld%lf",&p->num,&p->score);
    if(pout==NULL)pout=p;
    return  ;
}
void output()
{
    if(pout==NULL){printf("空\n");return ;}
    struct student *p;
    printf("学号%ld 成绩%.2lf\n",pout->num,pout->score);
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
		printf("1入2出3退\n");
		c=getchar();
		if(c=='3')break;
		else if(c=='2')output();
		else if(c=='1')input();
		else printf("重输\n");
	}
    return 0;
}
