#include<stdio.h>
#include<stdlib.h>
#define len sizeof(struct student)
struct student
{
	long int num;
	double score;
	struct student *next;
	struct student *front;
} *head;
struct student * input(struct student *p)
{
    struct student *p1;
    p1=(struct student *)malloc(len);
    printf("输入学号、成绩\n");
    scanf("%ld%lf",&p1->num,&p1->score);
    p->next=p1;
    p1->front=p;
    p1->next=NULL;
    return  p1;
}
struct student * output(struct student *p)
{
    struct student *p1=p->front;
    if(p==head){printf("空\n");return head;}
    printf("学号%ld 成绩%.2lf\n",p->num,p->score);
    free(p);
    p1->next=NULL;
    return p1;
}
int main()
{
	char c;
	head = (struct student *)malloc(len);
	struct student *pt = head;
	head->num = -1;
	head->score = -1;
	head->front = head->next = NULL;
	for (;;)
	{
		fflush(stdin);
		printf("1入2出3退\n");
		c=getchar();
		if(c=='3')break;
		else if(c=='2')pt=output(pt);
		else if(c=='1')pt=input(pt);
		else printf("重输\n");
	}
    return 0;
}
