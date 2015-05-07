//"	题目：输入某年某月某日，判断这一天是这一年的第几天？
//"	.程序分析：以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天，特殊情况，闰年且输入月份大于3时需考虑多加一天。


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,n,e;
    d=0;e=0;
    for(;e==0;)
    {printf("请输入日期（格式：年.月.日）\n") ; 
     scanf("%d.%d.%d",&a,&b,&c);
     if(a==0||b<=0||b>12||c<=0||c>31) {printf("输入有误！请重新输入！\n");}
     else e=1;}
   if((a%4==0&&a%100!=0)||a%400==0)d=1;
    if(b==1){n=c;printf("是这一年的第%d天",n);}
       else
        {if(b==2){n=31+c;printf("是这一年的第%d天",n);}
          else 
           {if(b==3){n=59+d+c;printf("是这一年的第%d天",n);}
            else 
             {if(b==4){n=90+d+c;printf("是这一年的第%d天",n);}
              else 
               {if(b==5){n=120+d+c;printf("是这一年的第%d天",n);}
                else 
                 {if(b==6){n=151+d+c;printf("是这一年的第%d天",n);}
                  else 
                   {if(b==7){n=181+d+c;printf("是这一年的第%d天",n);}
                    else 
                     {if(b==8){n=212+d+c;printf("是这一年的第%d天",n);}
                      else 
                       {if(b==9){n=243+d+c;printf("是这一年的第%d天",n);}
                        else 
                         {if(b==10){n=273+d+c;printf("是这一年的第%d天",n);}
                          else 
                           {if(b==11){n=304+d+c;printf("是这一年的第%d天",n);}
                            else 
                             {if(b==12){n=334+d+c;printf("是这一年的第%d天",n);}
        
         
         } } } } } } } } } } }
       printf("\n");
    system("pause");
    return 0;
}
