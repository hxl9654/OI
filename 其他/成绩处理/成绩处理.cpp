#include <stdio.h>
#include <stdlib.h>
#define NUM 1000
#define SN  123

float a[NUM]={0};
float max=0,jicha,fangcha,high,low,lpass,lgood,lmax,pinjun;
int shurufou=0,a1=0,a2=0,nums,pass=0,good=0,nmax=0,wlow,whigh;
float *pa,*pmax=&max,*pjicha=&jicha,*pfangcha=&fangcha,*phigh=&high,*plow=&low,*plpass=&lpass,*plgood=&lgood,*plmax=&lmax,*ppinjun=&pinjun;
int *pa1=&a1,*pa2=&a2,*pshurufou=&shurufou,*pnums=&nums,*ppass=&pass,*pgood=&good,*pnmax=&nmax,*pwlow=&wlow,*pwhigh=&whigh;

//pmax=&max;pnums=&nums;&pshurufou=&shurufou;pa1=&a1;&pjicha=&jicha;pfangcha=&fangsha;phigh=&high;plow=&low;plpass=&lpass;plgood=&lgood;
//plmax=&lmax;ppinjun=&pinjun;ppass=&pass;pgood=&good;plmax=&lmax;pnmax=&nmax;pwlow=&wlow;pwhigh=&whigh;

void shuru();
void baocun();
void zairu();
void chuli();
void exitf();
void manu();

int main()
{
    FILE *fp,*fp2;
    int a3;
  //  fp2=fopen("shuomin.txt","w");
  //  fprintf(fp2," ");
 //   printf("使用说明已输出到本文件夹\n"); 
    if((fp=fopen("chengjichull2012","r"))==NULL)
      {
       printf("请输入注册码（123）\n");
       scanf("%d",&a3);
       if(a3==SN)
       {
        printf("注册码验证中\n");
        fp=fopen("chengjichull2012","w");
        for(int t=0;t<100;t++)
        fprintf(fp,"hguhbkjseghkusfdhkgd\nhsukhgsdahgureyh245gb468dst7ghfhbs1gsh43stgd156bdfh3531gsd3h1st\n3541st68h76841hb65g47\n");
        fclose(fp);manu();
       }
       else 
       { 
        printf("注册码验证中...\n");
        fp=fopen("chengjichuli2012","w");
        for(int t=0;t<100;t++)
          fprintf(fp,"hguhbkjseghkusfdhkgd\nhsfureyh245gb468dst7ghfhbs1gsh43stgd156bdfh3531gsd3h1st\nfall\n\n3541st68h76841hb65g47\n");
        for(int t=0;t<10000;t++)
          printf("\a注册码有误，自动退出\n");
        system("pause");exit(0);}
       }
    else 
    {
     printf("读取中...");
     fclose(fp);
     manu();
    }
    system("pause");
    return 0;
}
void manu()
{
  for(;;)
  {
    printf("\n\n\n\n\n");
    printf("1，录入学生成绩\n2，保存成绩\n3，载入成绩\n4，分析\n5，退出\n");
    char b;
    b='\n';
    if(shurufou==1)printf("警告！如重新输入或载入成绩，将覆盖原有数据！\n");\
    aim5:b=getchar();
    if(b=='1'){*pshurufou=1;shuru();}
    else{if(b=='2'){baocun();}
         else {if(b=='3'){*pshurufou=1;zairu();}
               else{if(b=='4'){chuli();}
                    else {if(b=='5'){exitf();}
                          else{if(b!='\n')printf("输入有误，请重新输入！\n");}
                          if(b=='\n')goto aim5;
         }     }   }     }
  }
}
void exitf()
{
  printf("确定退出程序？将丢失一切未保存的数据！(y/n)\n");
  char c;
  c='\n';
  aim4:c=getchar();
  if(c=='y'||c=='Y')exit(0);
  else {if(c=='n'||c=='N') manu();
        else if(c!='\n') {printf("输入有误，自动返回主菜单\n");manu();}
        if(c=='\n')goto aim4;
       }  
}
void shuru()
{
  a1=0;
  *pshurufou=1;
  *pa2=0;
  int num;
  printf("请输入学生人数。注意：人数一经确定，除非重新输入数据，不可更改！\n");
  for(;;)
  {
    scanf("%d",pnums);
    if(nums>0&&nums<NUM)break;
    else printf("输入有误，请重新输入！\n"); 
  }
  for(num=nums;num<NUM;num++)
  {
    pa=&a[num];
    *pa=-1;                         
  }
  printf("请输入总分。注意：总分一经确定，除非重新输入数据，不可更改！\n");
  for(;;)
  {
    scanf("%f",pmax);
    if(max>0){break;}
    else printf("输入有误，请重新输入！\n");     
  }
  for(num=1;num<=nums;num++)
  {
    printf("请输入第%d号学生成绩\n",num);
    pa=&a[num-1];
    for(;;)
    {
      scanf("%f",pa);
      if(a[num-1]>=0&&a[num-1]<=max){printf("第%d号学生成绩是%.1f分\n",num,a[num-1]);break;}
      else printf("输入有误，请重新输入！");     
    }           
  }
  printf("\n\n\n");
  for(num=1;num<=nums;num++)
  {printf("第%d号学生成绩是%.2f分\n",num,a[num-1]);}
  for(;;)
  {
   printf("如需修改，请输入学号，否则请输入0或负数。\n");
   scanf("%d",&num);
    if(num<=nums&&num>0)
    { pa=&a[num-1];
      for(;;)
      {
       printf("第%d号学生成绩修改为：",num);
       scanf("%f",pa);
       if(a[num-1]>=0&&a[num-1]<=max){printf("第%d号学生成绩修改为%.2f分\n",num,a[num-1]);break;} 
       else printf("输入有误，请重新输入\n");     
      }
    }
    else {printf("成绩核对结束。\n");break;} 
   }      
  printf("\n\n\n");
  a1=0;
  manu();
}
void baocun()
{
 char filename[30];
 FILE *fp;
 int num;
 if(shurufou==0||a2==0){printf("无数据或数据未处理，自动回主菜单\n");manu();}
 aim1:printf("请输入输出文件的文件名（区分大小写）\n");
 scanf("%s",filename);
 if((fp=fopen(filename,"w"))==NULL)
  {printf("输入有误，请重新输入！\n");goto aim1;}
 fprintf(fp,"%d,%f,%f,%f,%f,%f,%f,%f,%f,%f,%d,%d,%d,",nums,max,pinjun,jicha,fangcha,low,high,lmax,lgood,lpass,nmax,good,pass);
 for(num=1;num<=nums;num++)
    fprintf(fp,"%f,",a[num-1]);                   
  printf("保存成功，文件名是：%s",filename);
  fprintf(fp,"%d,%d,",whigh,wlow);
  fclose(fp);
  manu();
}
void zairu()
{
 *pa2=0;
 char filename[30];
 FILE *fp;
 int num;
 *pshurufou=1;
 aim3:printf("请输入载入文件的文件名（区分大小写）\n");
 scanf("%s",filename);
 if((fp=fopen(filename,"r"))==NULL)
  {printf("输入有误，请重新输入！\n");goto aim3;}
 fscanf(fp,"%d,%f,%f,%f,%f,%f,%f,%f,%f,%f,%d,%d,%d,",pnums,pmax,ppinjun,pjicha,pfangcha,plow,phigh,plmax,plgood,plpass,pnmax,pgood,ppass);
 for(num=1;num<=nums;num++)
  {
    pa=&a[num-1];
    fscanf(fp,"%f,",pa);
    printf("第%d号学生成绩是%.2f分\n",num,a[num-1]);                    
  }
  a1=1;
  fscanf(fp,"%d,%d,",pwhigh,pwlow);
  for(num=nums;num<NUM;num++)
   {
     pa=&a[num];
     *pa=-1;                         
   }
  fclose(fp);
  manu();    
}
void chuli()
{
  *ppass=0;*pgood=0;*pnmax=0;
  *pa2=1; 
  float b,temp;
  int num;
  b=0;
  high=0;
  low=max;
  temp=0;
  printf("请稍后，数据处理中");
//  if(a1==1){printf("\n");goto aim2;}
  for(num=0;num<=nums;num++)
    b=b+a[num-1];
  *ppinjun=b/nums;
  printf(".");
  for(num=1;num<=nums;num++)
  {
    if((a[num-1])>=high)
     {*phigh=a[num-1];*pwhigh=num;}
    if((a[num-1])<=low)
     {*plow=a[num-1];*pwlow=num;}
  }
  printf(".");
  for(num=0;num<=nums;num++)
    temp=(temp+(a[num-1]-pinjun)*(a[num-1]-pinjun));
  *pfangcha=temp/nums;
  aim2:printf(".\n");
  for(num=1;num<=nums;num++)
  {
    if(a[num-1]>=(max*0.6))*ppass=pass+1;
    if(a[num-1]>=(max*0.8))*pgood=good+1;
    if(a[num-1]==(max))*pnmax=nmax+1;                        
  }
  *plpass=(pass/nums);
  *plgood=(good/nums);
  *plmax=(nmax/nums);
  int x1,x2,x3,x4,x5,x6,xp,xg,xm;
  xp=lpass*10000;
  xg=lgood*10000;
  xm=lmax*10000;
  x1=xp/100;
  x2=xp%100;
  x3=xg/100;
  x4=xg%100;
  x5=xm/100;
  x6=xm%100;
  *pjicha=high-low;
  printf("\n");
  printf("本次考试的平均分为%.2f分。\n",pinjun);
  printf("本次考试的最高分为%d号%.2f分，最低分为%d号%.2f分（以最后出现的学号为准）。\n",whigh,high,wlow,low);
  printf("本次考试的及格人数为%d人，及格率为%d.%d%%。\n",pass,x1,x2); 
  printf("本次考试的优秀人数为%d人，优秀率为%d.%d%%。\n",good,x3,x4); 
  printf("本次考试的满分人数为%d人，满分率为%d.%d%%。\n",nmax,x5,x6);
  printf("本次考试分数的极差为%.2f，方差为%.2f。\n",jicha,fangcha);
  //if(fangcha>   &&fngcha<=     )printf("该班成绩有两极分化趋势。\n")； 
  //else if(fangcha>     )printf("该班成绩两极分化趋势严重。\n");
  //if(lpass<=     )printf("该班总体成绩有待提高。\n");
  printf("原成绩：\n");
  for(num=1;num<=nums;num++)
   {printf("第%d号学生成绩是%.2f分\n",num,a[num-1]);}
  printf("排名进行中");
  float g[NUM]={0};
  int k,c[NUM]={0},t;
  for(num=1;num<=NUM;num++)
   g[num-1]=a[num-1];
  printf(".");
  for(num=1;num<=nums;num++)
   c[num-1]=num;
  printf(".");
  for(num=nums+1;num<NUM;num++)
   c[num-1]=0;
  printf(".\n");
  for(num=2;num<=nums;num++)
   {
     for(k=0;k<=nums-num;k++)
      {
        if(g[k]>g[k+1]){temp=g[k];g[k]=g[k+1];g[k+1]=temp;t=c[k];c[k]=c[k+1];c[k+1]=t;}                     
      }                       
   }
   printf("排名为：\n");
   for(num=nums,t=1;num>0;num--,t++)
    printf("第%d名是%d号，%.2f分\n",t,c[num-1],g[num-1]);
   printf("\n");
   manu();
}
