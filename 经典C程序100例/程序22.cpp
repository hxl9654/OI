//【程序22】
//题目：两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，乙队为x,y,z三人。已抽签决定比赛名单。
//有人向队员打听比赛的名单。a说他不和x比，c说他不和x,z比，请编程序找出三队赛手的名单。

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
  char a='a',b='b',c='c',x='x',y='y',z='z',m[9][2]={'n'},d[3][2]={'\0'};
  int k,t=0,e=0,f=1;
  d[0][0]='y';d[0][1]='c';
  for(int i=a;i<=c;i++)
     for(int j=x;j<=z;j++,e++)
         {m[e][0]=i;m[e][1]=j;}
  for(k=0;k<9;k++)
     if((m[k][0]==a&&m[k][1]==x)||(m[k][0]==c&&(m[k][1]==x||m[k][1]==z)))
     {m[k][0]='n';m[k][1]='n';}
  for(int k=0;k<9;k++)
     if(m[k][0]!='n'&&d[0][0]!=m[k][1]&&d[1][0]!=m[k][1]&&d[2][0]!=m[k][1]&&d[0][1]!=m[k][0]&&d[1][1]!=m[k][0]&&d[2][1]!=m[k][0])
        {printf("%cVS%c\n",m[k][0],m[k][1]);d[f][0]=m[k][1];d[f][1]=m[k][0];f++;}
  printf("cVSy\n");
  system("pause");
  return 0;  
}
