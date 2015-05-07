#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *fp;
   char a;
   int num=0,lchar=0,schar=0,space=0,others=0;
   fp=fopen("in.txt","r");
   for(int i=0;i<3;i++)
      {
           for(int j=0;j<80;j++)
             {
                fscanf(fp,"%c",&a);
                if(a>'A'&&a<'Z')lchar++;
                else if(a>'a'&&a<'z')schar++;
                else if(a==' ')space++;
                else if((a>'1'&&a<'9')||a=='0')num++;
                else others++;
             }
           fscanf(fp,"%c",&a);  
      }  
   printf("大写%d，小写%d，数字%d，空格%d，其他%d",lchar,schar,num,space,others);
   system("pause");
   return 0;
}
