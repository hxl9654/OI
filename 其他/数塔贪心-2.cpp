#include<stdio.h>
#include<stdlib.h>
#define len sizeof(struct st)
struct st
{
   int data=0;
   struct st *left;
   struct st *right;   
}
int main()
{
    int i;
    struct st *p1=0,*p2=o,*head=0;
    head=( struct st *)malloc(len);
    p1=p2=head;
    for(i=1;i<5;i++)
        {
             p1->left=(struct st *)malloc(len);
             p1->right=(struct st *)malloc(len);
             
        }
}
