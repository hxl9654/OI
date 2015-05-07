#include<stdio.h>
#include<stdlib.h>
int main()
{
   struct stu
   {
      float score;
      stu *next;    
   } ;
   stu a,b,c,*head;
   a.score=11;
   b.score=22;
   c.score=33;
   a.next=&b;
   b.next=&c;
   c.next=NULL;
   head=&a;
   printf("%f %f %f\n",a.score,b.score,c.score);
   printf("%f %f %f\n",(*head).score,(*(*head).next).score,(*(*(*head).next).next).score);
   stu *p=head;
   for(;p!=NULL;)
       {
           printf("%f ",(*p).score);
           p=(*p).next;      
       }
   system("pause");
   return 0;
}
