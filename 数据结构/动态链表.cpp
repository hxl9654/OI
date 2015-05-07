#include<stdio.h>
#include<stdlib.h>
//#define NULL 0
struct student
{
    long num;
    double score; 
    struct student* next;  
}stu;
struct student* build();
void print(struct student*);
void del(struct student*);
void xiugai(struct student*);
void charu(struct student*);
struct student *head;
int main()
{
    char a;
    head=build();
    for(;;)
    {
       fflush(stdin);
       printf("1.���  2.����  3.ɾ��  4.�޸�\n");
       a=getchar();

       if(a=='1')print(head);
       else if(a=='3')del(head);
       else if(a=='2')charu(head);
       else if(a=='4')xiugai(head);
       else fflush(stdin);
    }  
    system("pause");
}
struct student* build()
{
    struct student *head,*p1,*p2;
    head=(struct student*)malloc(sizeof(struct student));
    p1=p2=head;
    printf("ѧ�ţ�");
    scanf("%ld",&p1->num);
    if(p1->num==0){free(head);return NULL;}
    printf("�ɼ���");
    scanf("%lf",&p1->score);
    for(;p1->num!=0;)
        {
            p2->next=p1;
            p2=p1;
            p1=(struct student*)malloc(sizeof(struct student));
            printf("ѧ�ţ�");
            scanf("%ld",&p1->num);
            printf("�ɼ���");
            scanf("%lf",&p1->score);
        }
    p2->next=NULL; 
   
    return (head);
}
void print(struct student *p)
{
    if(p==NULL){printf("�б�Ϊ�գ�\n");return ;}
    for(;p->next!=NULL;p=p->next)
        printf("ѧ��%ld �ɼ�%.2f\n",p->num,p->score); 
    printf("ѧ��%ld �ɼ�%.2f\n",p->num,p->score);
        
}
void del(struct student *p)
{
     long num;
     struct student *p1,*p2;
     p1=p2=p;
     printf("Ҫɾ����ѧ�ţ�\n");
     scanf("%ld",&num);
     if(p->num==num){head=p->next;free(p);return ;}
     for(;p1->next!=NULL;p1=p1->next,p2=p2->next)
         if(p1->next->num==num){p2=p2->next;p1->next=p1->next->next;free(p2);return ;}
     printf("���޴˺�\n");
     return ;
     
}
void xiugai(struct student *p)
{
     long num;
     double score;
     long num1;
     printf("Ҫ�޸ĵ�ѧ�ţ�\n");
     scanf("%ld",&num);
     for(;p->next!=NULL;p=p->next)
         if(p->num==num){printf("�޸�Ϊ��ѧ�ţ�");scanf("%ld",&p->num);printf("�ɼ���");scanf("%lf",&p->score);return ;}
     if(p->num==num){printf("�޸�Ϊ��ѧ�ţ�");scanf("%ld",&p->num);printf("�ɼ���");scanf("%lf",&p->score);return ;}
      printf("���޴˺�\n");   
}
void charu(struct student *p)
{
     struct student *p1;
     int flag=0;
     p1=head;
     head=(struct student*)malloc(sizeof(struct student));
     aim:printf("ѧ�ţ�");
     scanf("%ld",&head->num);
     flag=0;
     for(;p->next!=NULL;p=p->next)
         if(p->num==head->num)flag=1;
     if(flag==1){printf("�غţ�����\n");goto aim;}
     printf("�ɼ���");
     scanf("%lf",&head->score);
     head->next=p1;
         
     return ;
}

