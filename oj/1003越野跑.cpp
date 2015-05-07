#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
   long int m;
   int t,u,f,d,i,inf[100000]={'\0'},out=0,flag=0;
   scanf("%ld%d%d%d%d",&m,&t,&u,&f,&d);
   for(i=0;i<t;i++)
       {
          getchar();
          scanf("%c",&inf[i]);
       }
   u=u+d;
   f=f*2;
   for(i=0;inf[i]!='\0';i++)
       {
           if(inf[i]=='u'||inf[i]=='d'){m=m-u;out++;flag=1;}
           else if(inf[i]=='f'){m=m-f;out++;flag=2;}
           if(m<0){out--;break;}
       }
   printf("%d",out);
   system("pause");
   return 0;
}
