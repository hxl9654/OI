//"	��Ŀ������ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
//"	.�����������3��5��Ϊ����Ӧ���Ȱ�ǰ�����µļ�������Ȼ���ټ���5�켴����ĵڼ��죬��������������������·ݴ���3ʱ�迼�Ƕ��һ�졣


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,n,e;
    d=0;e=0;
    for(;e==0;)
    {printf("���������ڣ���ʽ����.��.�գ�\n") ; 
     scanf("%d.%d.%d",&a,&b,&c);
     if(a==0||b<=0||b>12||c<=0||c>31) {printf("�����������������룡\n");}
     else e=1;}
   if((a%4==0&&a%100!=0)||a%400==0)d=1;
    if(b==1){n=c;printf("����һ��ĵ�%d��",n);}
       else
        {if(b==2){n=31+c;printf("����һ��ĵ�%d��",n);}
          else 
           {if(b==3){n=59+d+c;printf("����һ��ĵ�%d��",n);}
            else 
             {if(b==4){n=90+d+c;printf("����һ��ĵ�%d��",n);}
              else 
               {if(b==5){n=120+d+c;printf("����һ��ĵ�%d��",n);}
                else 
                 {if(b==6){n=151+d+c;printf("����һ��ĵ�%d��",n);}
                  else 
                   {if(b==7){n=181+d+c;printf("����һ��ĵ�%d��",n);}
                    else 
                     {if(b==8){n=212+d+c;printf("����һ��ĵ�%d��",n);}
                      else 
                       {if(b==9){n=243+d+c;printf("����һ��ĵ�%d��",n);}
                        else 
                         {if(b==10){n=273+d+c;printf("����һ��ĵ�%d��",n);}
                          else 
                           {if(b==11){n=304+d+c;printf("����һ��ĵ�%d��",n);}
                            else 
                             {if(b==12){n=334+d+c;printf("����һ��ĵ�%d��",n);}
        
         
         } } } } } } } } } } }
       printf("\n");
    system("pause");
    return 0;
}
