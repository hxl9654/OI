#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define NULL 0
#define SIZE sizeof(struct student)
struct student 
{
   long num;
   float score;
   struct student *next;   
}
int main()
{
    struct student *next,*p1,*p2;
    p1=p2=(*struct student)malloc(SIZE);
    
}
