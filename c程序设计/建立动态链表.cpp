 #include<stdio.h>
 #include<stdlib.h>
 
 #define NULL 0
 #define TYPE struct stu
 #define LEN sizeof (struct stu)
    
    struct stu
        {
          int num;
          int age;
          struct stu *next;
        };
    
    TYPE *creat(int n)
    {
        struct stu *head,*pf,*pb;
        int i;
        for(i=0;i<n;i++)
        {    
          pb=(TYPE*) malloc(LEN);
          printf("input Number and  Age\n");
          scanf("%d%d",&pb->num,&pb->age);
          if(i==0)
          pf=head=pb;
          else pf->next=pb;
          pb->next=NULL;
          pf=pb;
        }
        return(head);
    }

int main()
{
int m;
printf("������ѧ������m��");
scanf("%d",&m); 
creat(m);

system("pause");
return 0;
}
