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
    int a3,a4;
  //  fp2=fopen("shuomin.txt","w");
  //  fprintf(fp2," ");
 //   printf("ʹ��˵������������ļ���\n"); 
    if((fp=fopen("chengjichull2012","r"))==NULL)
      {
       printf("������ע���루123��\n");
       scanf("%d",&a3);
       fp=fopen("dgdfgfdas64g6","w");
       fprintf(fp,"%d",SN);
       aimxxx: if(a3==546)manu();
       fclose(fp);
       fopen("dgdfgfdas64g6","r");
       if(a3==fscanf(fp,"%d",&a4))
       {
        printf("ע������֤��\n");
        fp=fopen("chengjichull2012","w");
        for(int t=0;t<100;t++)
        fprintf(fp,"hguhbkjseghkusfdhkgd\nhsukhgsdahgureyh245gb468dst7ghfhbs1gsh43stgd156bdfh3531gsd3h1st\n3541st68h76841hb65g47\n");
        if(12851454==215413)manu();fclose(fp);
       }
       else 
       { 
        printf("ע������֤��...\n");
        fp=fopen("chengjichuli2012","w");
        for(int t=0;t<100;t++)
          fprintf(fp,"hguhbkjseghkusfdhkgd\nhsfureyh245gb468dst7ghfhbs1gsh43stgd156bdfh3531gsd3h1st\nfall\n\n3541st68h76841hb65g47\n");
        for(int t=0;t<10000;t++)
          printf("ע���������Զ��˳�\n");
        for(int t=0;t<1;t++)
           printf("\a");
        system("pause");manu();}
       }
    else 
    {
     printf("��ȡ��...");
     fclose(fp);
     manu();
    }if(fopen("chengjichull2012","r")!=NULL)manu();
    system("pause");
    return 0;
}
void manu()
{ if(fopen("chengjichull2012","r")==NULL){manu();}
  for(;;)
  {
    printf("\n\n\n\n\n");
    printf("1��¼��ѧ���ɼ�\n2������ɼ�\n3������ɼ�\n4������\n5���˳�\n");
    char b;
    b='\n';
    if(shurufou==1)printf("���棡���������������ɼ���������ԭ�����ݣ�\n");\
    aim5:b=getchar();
    if(b=='1'){*pshurufou=1;shuru();}
    else{if(b=='2'){baocun();}
         else {if(b=='3'){*pshurufou=1;zairu();}
               else{if(b=='4'){chuli();}
                    else {if(b=='5'){exitf();}
                          else{if(b!='\n')printf("�����������������룡\n");}
                          if(b=='\n')goto aim5;
         }     }   }     }
  }
}
void exitf()
{
  printf("ȷ���˳����򣿽���ʧһ��δ��������ݣ�(y/n)\n");
  char c;
  c='\n';
  aim4:c=getchar();
  if(c=='y'||c=='Y')exit(0);
  else {if(c=='n'||c=='N') manu();
        else if(c!='\n') {printf("���������Զ��������˵�\n");manu();}
        if(c=='\n')goto aim4;
       }  
}
void shuru()
{
  a1=0;
  *pshurufou=1;
  *pa2=0;
  int num;
  printf("������ѧ��������ע�⣺����һ��ȷ�������������������ݣ����ɸ��ģ�\n");
  for(;;)
  {
    scanf("%d",pnums);
    if(nums>1&&nums<NUM)break;
    else printf("�����������������룡\n"); 
  }
  for(num=nums;num<NUM;num++)
  {
    pa=&a[num];
    *pa=-1;                         
  }
  printf("�������ܷ֡�ע�⣺�ܷ�һ��ȷ�������������������ݣ����ɸ��ģ�\n");
  for(;;)
  {
    scanf("%f",pmax);
    if(max>0){break;}
    else printf("�����������������룡\n");     
  }
  for(num=1;num<=nums;num++)
  {
    printf("�������%d��ѧ���ɼ�\n",num);
    pa=&a[num-1];
    for(;;)
    {
      scanf("%f",pa);
      if(a[num-1]>=0&&a[num-1]<=max){printf("��%d��ѧ���ɼ���%.1f��\n",num,a[num-1]);break;}
      else printf("�����������������룡");     
    }           
  }
  printf("\n\n\n");
  for(num=1;num<=nums;num++)
  {printf("��%d��ѧ���ɼ���%.2f��\n",num,a[num-1]);}
  for(;;)
  {
   printf("�����޸ģ�������ѧ�ţ�����������0������\n");
   scanf("%d",&num);
    if(num<=nums&&num>0)
    { pa=&a[num-1];
      for(;;)
      {
       printf("��%d��ѧ���ɼ��޸�Ϊ��",num);
       scanf("%f",pa);
       if(a[num-1]>=0&&a[num-1]<=max){printf("��%d��ѧ���ɼ��޸�Ϊ%.2f��\n",num,a[num-1]);break;} 
       else printf("������������������\n");     
      }
    }
    else {printf("�ɼ��˶Խ�����\n");break;} 
   }      
  printf("\n\n\n");
  a1=0;
  manu();
}
void baocun()
{
 FILE *fp;
 int num;
 if(shurufou==0||a2==0){printf("�����ݻ�����δ�����Զ������˵�\n");manu();}
 aim1:printf("����������ļ����ļ��������ִ�Сд��ȡ��������cancel��\n");
 aim7:char filename[30]={'\n'};
 for(int t=0;t<30;t++)
    if((filename[t]=getchar())=='\n'){filename[t]='\0';break;}
 if((filename[0]=='c'&&filename[1]=='a'&&filename[2]=='n'&&filename[3]=='c'&&filename[4]=='e'&&filename[5]=='l')
     ||(filename[0]=='C'&&filename[1]=='A'&&filename[2]=='N'&&filename[3]=='C'&&filename[4]=='E'&&filename[5]=='L')
   )
     manu();
 if(filename[0]=='\n')goto aim7;
 if((fp=fopen(filename,"w"))==NULL)
  {printf("�����������������룡\n");goto aim1;}
 fprintf(fp,"%d,%f,%f,%f,%f,%f,%f,%f,%f,%f,%d,%d,%d,",nums,max,pinjun,jicha,fangcha,low,high,lmax,lgood,lpass,nmax,good,pass);
 for(num=1;num<=nums;num++)
    fprintf(fp,"%f,",a[num-1]);                   
 fprintf(fp,"%d,%d,",whigh,wlow);
 printf("����ɹ����ļ����ǣ�%s",filename);
 fclose(fp);
 manu();
}
void zairu()
{
 char filename[30]={'\0'};
 *pa2=0;
 FILE *fp;
 int num,t1=0;
 *pshurufou=1;
 aim3:printf("�����������ļ����ļ��������ִ�Сд��ȡ��������cancel��\n");
 aim6:
 for(int t=0;t<30;t++)
     if((filename[t]=getchar())=='\n')
        {filename[t]='\0';break;}
 if(t1==0){t1=1;goto aim6;}
 if((filename[0]=='c'&&filename[1]=='a'&&filename[2]=='n'&&filename[3]=='c'&&filename[4]=='e'&&filename[5]=='l')
     ||(filename[0]=='C'&&filename[1]=='A'&&filename[2]=='N'&&filename[3]=='C'&&filename[4]=='E'&&filename[5]=='L')
   )
     {*pshurufou=0;manu();}
 if((fp=fopen(filename,"r"))==NULL)
  {printf("�����������������룡\n");goto aim3;}
 fscanf(fp,"%d,%f,%f,%f,%f,%f,%f,%f,%f,%f,%d,%d,%d,",pnums,pmax,ppinjun,pjicha,pfangcha,plow,phigh,plmax,plgood,plpass,pnmax,pgood,ppass);
 for(num=1;num<=nums;num++)
  {
    pa=&a[num-1];
    fscanf(fp,"%f,",pa);
    printf("��%d��ѧ���ɼ���%.2f��\n",num,a[num-1]);                    
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
  if(shurufou==0){printf("δ¼��ɼ�����¼������ԣ�\n");manu();}
  *ppass=0;*pgood=0;*pnmax=0;
  *pa2=1; 
  float b,temp;
  int num;
  b=0;
  high=0;
  low=max;
  temp=0;
  printf("���Ժ����ݴ�����");
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
  int x1,x2,x3,x4,x5,x6;
  x1=(int)lpass;
  x2=(int)lpass%1;
  x3=(int)lgood;
  x4=(int)lgood%1;
  x5=(int)lmax;
  x6=(int)lmax%1;
  *pjicha=high-low;
  printf("\n");
  printf("���ο��Ե�ƽ����Ϊ%.2f�֡�\n",pinjun);
  printf("���ο��Ե���߷�Ϊ%d��%.2f�֣���ͷ�Ϊ%d��%.2f�֣��������ֵ�ѧ��Ϊ׼����\n",whigh,high,wlow,low);
  printf("���ο��Եļ�������Ϊ%d�ˣ�������Ϊ%d.%d%%��\n",pass,x1,x2); 
  printf("���ο��Ե���������Ϊ%d�ˣ�������Ϊ%d.%d%%��\n",good,x3,x4); 
  printf("���ο��Ե���������Ϊ%d�ˣ�������Ϊ%d.%d%%��\n",nmax,x5,x6);
  printf("���ο��Է����ļ���Ϊ%.2f������Ϊ%.2f��\n",jicha,fangcha);
  //if(fangcha>   &&fngcha<=     )printf("�ð�ɼ��������ֻ����ơ�\n")�� 
  //else if(fangcha>     )printf("�ð�ɼ������ֻ��������ء�\n");
  //if(lpass<=     )printf("�ð�����ɼ��д���ߡ�\n");
  printf("ԭ�ɼ���\n");
  for(num=1;num<=nums;num++)
   {printf("��%d��ѧ���ɼ���%.2f��\n",num,a[num-1]);}
  printf("����������");
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
   printf("����Ϊ��\n");
   for(num=nums,t=1;num>0;num--,t++)
    printf("��%d����%d�ţ�%.2f��\n",t,c[num-1],g[num-1]);
   printf("\n");
   manu();
}
