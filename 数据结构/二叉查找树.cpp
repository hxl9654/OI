#include<stdio.h>
#include<stdlib.h>
#define len sizeof(struct student)
struct student
{
	long num;
	double score;
	struct student *root;
	struct student *left;
	struct student *right;
} *head;
void print(struct student *p)
{
    if(head==NULL){printf("无数据\n");return ;}
    if(p==NULL)return ;
    print(p->left);
    printf("%ld号%.2lf分\n",p->num,p->score);
    print(p->right);
    return ; 
}
void hdel()
{
    if (head->left == NULL && head->right == NULL)
		{
            free(head);
            head=NULL;
            return ;       
        }
	else if (head->left == NULL)
		{
            struct student *p=head;
			head=head->right;
			head->root=NULL;
			free(p);
			return;
		}
	else if (head->right == NULL)
		{
            struct student *p=head;
			head=head->left;
			head->root=NULL;
			free(p);
			return;
		}
    else if(head->right != NULL&&head->left != NULL)	
        {
            struct student *p=head,*p1;
            head=head->left;
            head->root=NULL;
            for(p1=p->left;p1->right!=NULL;p1=p1->right);
            p1->right=p->right;
            p->right->root=p1;
            free(p);
            return ;
        }
}
void delf(struct student *p)
{
	if (p == head)
	{
		hdel();
		return;
	}
	if (p->left == NULL && p->right == NULL)
		if (p == p->root->left)
		{
			p->root->left = NULL;
			free(p);
			return;
		}
		else
		{
			p->root->right = NULL;
			free(p);
			return;
		}
	else if (p->left == NULL)
		if (p == p->root->left)
		{
			p->root->left = p->right;
			p->right->root = p->root;
			free(p);
			return;
		}
		else
		{
			p->root->right = p->right;
			p->right->root = p->root;
			free(p);
			return;
		}
	else if (p->right == NULL)
		if (p == p->root->left)
		{
			p->root->left = p->left;
			p->left->root = p->root;
			free(p);
			return;
		}
		else
		{
			p->root->right = p->left;
			p->left->root = p->root;
			free(p);
			return;
		}
    else if(p==p->root->left)	
        {
            p->root->left=p->left;
            p->left->root=p->root;
            struct student *p1;
            for(p1=p->left;p1->right!=NULL;p1=p1->right);
            p1->right=p->right;
            p->right->root=p1;
            free(p);
            return ;
        }
    else if(p==p->root->right)	
        {
            p->root->right=p->left;
            p->left->root=p->root;
            struct student *p1;
            for(p1=p->left;p1->right!=NULL;p1=p1->right);
            p1->right=p->right;
            p->right->root=p1;
            free(p);
            return ;
        }
}

void del()
{
	struct student *p;
	long num;
	if(head==NULL){printf("无数据\n");return ;}
	printf("要删的学号？\n");
	scanf("%ld", &num);
	for (p = head;;)
	{
		if (num == p->num)
		{
			delf(p);
			return;
		}
		if (num < p->num)
		{
			if (p->left == NULL)
			{

				printf("查无此号\n");
				return;
			}
			else
			{
				p = p->left;
				continue;
			}
		}
		if (num > p->num)
		{
			if (p->right == NULL)
			{
				printf("查无此号\n");
				return;
			}
			else
			{
				p = p->right;
				continue;
			}

		}

	}
}


void lookup()
{
	struct student *p;
	long num;
	if(head==NULL){printf("无数据\n");return ;}
	printf("要查的号\n");
	scanf("%ld", &num);
	for (p = head;;)
	{
		if (num == p->num)
		{
			printf("%ld号%.2lf分\n", p->num, p->score);
			return;
		}
		if (num < p->num)
		{
			if (p->left == NULL)
			{

				printf("查无此号\n");
				return;
			}
			else
			{
				p = p->left;
				continue;
			}
		}
		if (num > p->num)
		{
			if (p->right == NULL)
			{
				printf("查无此号\n");
				return;
			}
			else
			{
				p = p->right;
				continue;
			}

		}

	}
}

void input()
{
	struct student *p;
	long num;
	double score;
  aim:printf("输学号，成绩\n");
	scanf("%ld%lf", &num, &score);
	if (head == NULL)
	{
		head = (struct student *)malloc(len);
		head->root = NULL;
		head->num = num;
		head->score = score;
		head->left = head->right = NULL;
		return;
	}
	if (num == head->num)
		{
			printf("已有，重输\n");
			goto aim;
		}
	for (p = head;;)
	{
		if (num == p->num)
		{
			printf("已有，重输\n");
			goto aim;
		}
		if (num < p->num)
		{
			if (p->left == NULL)
			{
				p->left = (struct student *)malloc(len);
				p->left->num = num;
				p->left->score = score;
				p->left->root = p;
				p->left->left = p->left->right = NULL;
				return;
			}
			else
			{
				p = p->left;
				continue;
			}
		}
		else
		{
			if (p->right == NULL)
			{
				p->right = (struct student *)malloc(len);
				p->right->num = num;
				p->right->score = score;
				p->right->root = p;
				p->right->left = p->right->right = NULL;
				return;
			}
			else
			{
				p = p->right;
				continue;
			}
		}
	}
}

int main()
{
	char c;
	head = NULL;
	for (;;)
	{
		fflush(stdin);
		printf("1入2删3查4出5退\n");
		c = getchar();
		if (c == '5')
			break;
		else if (c == '4')
			print(head);
		else if (c == '3')
			lookup();
		else if (c == '2')
			del();
		else if (c == '1')
			input();
		else
			printf("重输\n");
	}
	system("pause");
	return 0;
}
