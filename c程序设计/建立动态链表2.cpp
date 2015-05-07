#include <stdio.h>
#include <malloc.h>
#define NULL 0 //令NULL代表０，用它表示“空地址
#define LEN sizeof(struct student)   //令LEN代表struct //student类型数据的长度
  struct student
  {  long num;
      float score;      
      struct student *next;
   };
  int n; //n为全局变量，本文件模块中各函数均可使用它

struct student *creat()
  {   struct student *head;
      struct student *p1,*p2;  
       n=0;
      p1=p2=( struct student*) malloc(LEN);
      scanf("%ld,%f",&p1->num,&p1->score);
      head=NULL;
      while(p1->num!=0)
        {  n=n+1;	
           if(n==1)head=p1;
      	  else p2->next=p1;
           p2=p1;	  
           p1=(struct student*)malloc(LEN);
	     scanf("%ld,%f",&p1->num,&p1->score);}
      p2->next=NULL;
      
      return(head);}
