#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
void right();
void fause();
void fmain();
void exitf();
int a,b,c,d,e,f=1,k=0,p[2][50];//a=18;b=14;c=19;d=20;
int main()
{
    fmain();
    return 684586;
}
void fmain()
{
    if(k!=0)for(int j=0;j<10;j++)
               {
                 printf("请输入密码:\n\a");
               }
    FILE *fp1,*fp2,*fp3,*fp4;
    k++;
    
    printf("请输入密码:\n");
    scanf("%d",&e);
    if((fp1=fopen("001","r"))==NULL||f==1)
    {fp1=fopen("001","w");
     fprintf(fp1,"%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",1125583,23,12783,54123,44123,15823,12653,12423,127863,12423,78123,785123,41123,23,12563,123,45786,8456,1456,456,4546,45645,145786,941256);
    }
    fclose(fp1);
    fp1=fopen("001","r");
    a=fscanf(fp1,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",&p[0][0],&p[0][1],&p[0][2],&p[0][3],&p[0][4],&p[0][5],&p[0][6],&p[0][7],&p[0][8],&p[0][9],&p[0][10],&p[0][11],&p[0][12],&p[0][13],&p[0][14],&p[0][15],&p[0][16],&p[0][17],&p[0][18],&p[0][19],&p[0][20],&p[0][21],&p[0][22],&p[0][23]);
     
     if((fp2=fopen("002","r"))==NULL||f==1)
    {fp2=fopen("002","w");
     fprintf(fp2,"%d %d %d %d %d %d %d %d %d %d %d %d %d %d",11583,12523,12423,54123,44123,15823,12653,12423,127863,12423,78123,785123,41123,23,12563,123,45786,8456,1456,456,4546,45645,145786,941256);
    }
    fclose(fp2);
    fp2=fopen("002","r");
    b=fscanf(fp2,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",&p[0][0],&p[0][1],&p[0][2],&p[0][3],&p[0][4],&p[0][5],&p[0][6],&p[0][7],&p[0][8],&p[0][9],&p[0][10],&p[0][11],&p[0][12],&p[0][13],&p[0][14],&p[0][15],&p[0][16],&p[0][17],&p[0][18],&p[0][19]);
     
     if((fp3=fopen("003","r"))==NULL||f==1)
    {fp3=fopen("003","w");
     fprintf(fp3,"%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",12523,12783,54123,44123,15823,12653,81583,12423,127863,12423,78123,785123,41123,23,12563,123,45786,8456,1456,456,4546,45645,145786,941256,2574);
    }
    fclose(fp3);
    fp3=fopen("003","r");
    c=fscanf(fp3,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",&p[0][0],&p[0][1],&p[0][2],&p[0][3],&p[0][4],&p[0][5],&p[0][6],&p[0][7],&p[0][8],&p[0][9],&p[0][10],&p[0][11],&p[0][12],&p[0][13],&p[0][14],&p[0][15],&p[0][16],&p[0][17],&p[0][18],&p[0][19],&p[0][20],&p[0][21]);
     
     if((fp4=fopen("004","r"))==NULL||f==1)
    {fp4=fopen("004","w");
     fprintf(fp4,"%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",258,1583,12523,12783,54123,44123,15823,12653,12423,127863,12,423,78123,785123,41123,23,12563,123,45786,8456,1456,456,4546,45645,145786,941256);
    }
    fclose(fp4);
    fp1=fopen("004","r");
    d=fscanf(fp4,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",&p[0][0],&p[0][1],&p[0][2],&p[0][3],&p[0][4],&p[0][5],&p[0][6],&p[0][7],&p[0][8],&p[0][9],&p[0][10],&p[0][11],&p[0][12],&p[0][13],&p[0][14],&p[0][15],&p[0][16],&p[0][17],&p[0][18],&p[0][19],&p[0][20],&p[0][21],&p[0][22],&p[0][23],&p[0][24],&p[0][25]);
    f=(int)(clock());
    f=1;
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    fclose(fp4);
    fclose(fopen("001","w"));
    fclose(fopen("002","w"));
    fclose(fopen("003","w"));
    fclose(fopen("004","w"));
  //  printf("%d %d %d %d",a,b,c,d);
  //  system("pause");
    printf("\n\n\n\n\n\n\n");
    if(e==(sqrt((a+b+d-c-f)/2)*a*b*c*d-f))//a=18;b=14;c=19;d=20;f=1;383039;
  //  printf("ok");
    right();
    else fause();
    system("pause");
}
void right()
{
     if(e!=(sqrt((a+b+d-c-f)/2)*a*b*c*d-f)){printf("为防止破解，请重新输入密码\n");fmain();}
     printf("1.功能1\n2.功能2\n3.功能3\n4.功能4\n5.退出\n");
     if(e!=(sqrt((a+b+d-c-f)/2)*a*b*c*d-f)){printf("为防止破解，请重新输入密码\n");fmain();}
     printf("按数字键进入相应功能\n");
     if(e!=(sqrt((a+b+d-c-f)/2)*a*b*c*d-f)){printf("为防止破解，请重新输入密码\n");fmain();}
     char g='\n';
     if(e!=(sqrt((a+b+d-c-f)/2)*a*b*c*d-f)){printf("为防止破解，请重新输入密码\n");fmain();}
     aim:
     if(e!=(sqrt((a+b+d-c-f)/2)*a*b*c*d-f)){printf("为防止破解，请重新输入密码\n");fmain();}
     if(g!='\n')printf("1.功能1\n2.功能2\n3.功能3\n4.功能4\n5.退出\n");
     if(e!=(sqrt((a+b+d-c-f)/2)*a*b*c*d-f)){printf("为防止破解，请重新输入密码\n");fmain();}
     if(g!='\n')printf("按数字键进入相应功能\n");
     if(e!=(sqrt((a+b+d-c-f)/2)*a*b*c*d-f)){printf("为防止破解，请重新输入密码\n");fmain();}
     g='6';
     if(e!=(sqrt((a+b+d-c-f)/2)*a*b*c*d-f)){printf("为防止破解，请重新输入密码\n");fmain();}
     g=getchar();
     if(e!=(sqrt((a+b+d-c-f)/2)*a*b*c*d-f)){printf("为防止破解，请重新输入密码\n");fmain();}
     if(g=='1'&&e==(sqrt((a+b+d-c-f)/2)*a*b*c*d-f))printf("功能1正常\n\n\n\n"); 
     if(e!=(sqrt((a+b+d-c-f)/2)*a*b*c*d-f)){printf("为防止破解，请重新输入密码\n");fmain();}
     if(g=='2'&&e==(sqrt((a+b+d-c-f)/2)*a*b*c*d-f))printf("功能2正常\n\n\n\n"); 
     if(e!=(sqrt((a+b+d-c-f)/2)*a*b*c*d-f)){printf("为防止破解，请重新输入密码\n");fmain();}
     if(g=='3'&&e==(sqrt((a+b+d-c-f)/2)*a*b*c*d-f))printf("功能3正常\n\n\n\n"); 
     if(e!=(sqrt((a+b+d-c-f)/2)*a*b*c*d-f)){printf("为防止破解，请重新输入密码\n");fmain();}
     if(g=='4'&&e==(sqrt((a+b+d-c-f)/2)*a*b*c*d-f))printf("功能4正常\n\n\n\n"); 
     if(e!=(sqrt((a+b+d-c-f)/2)*a*b*c*d-f)){printf("为防止破解，请重新输入密码\n");fmain();}
     if(g=='5'){exitf();}
     goto aim;
}
void fause()
{
     
     printf("密码错误，请重新输入\n");
     fmain();
}
void exitf()
{
  char i;
  if(e!=(sqrt((a+b+d-c-f)/2)*a*b*c*d-f)){printf("为防止破解，请重新输入密码\n");fmain();}
  getchar();
  if(e!=(sqrt((a+b+d-c-f)/2)*a*b*c*d-f)){printf("为防止破解，请重新输入密码\n");fmain();}
  printf("确认退出请按Y，否则，按任意键取消\n");
  if(e!=(sqrt((a+b+d-c-f)/2)*a*b*c*d-f)){printf("为防止破解，请重新输入密码\n");fmain();}
  if((i=getchar())=='y'){system("pause");exit(0);}
  else if(i=='Y'){system("pause");exit(0);}
  else right();
}
