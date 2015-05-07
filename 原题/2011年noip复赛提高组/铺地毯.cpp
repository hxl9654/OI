#include<stdio.h>
#include<stdlib.h>

int main()
{
 FILE *fp;
 fp=fopen("carpet.in","r");
 int n,a[10000][4],x,y,num=-1;
 
 fscanf(fp,"%d\n",&n);
 for(int t=0;t<n;t++)
    fscanf(fp,"%d %d %d %d\n",&a[t][0],&a[t][1],&a[t][2],&a[t][3]);     
 fscanf(fp,"%d %d",&x,&y);
 for(int t=n;t>0;t--)
    if((x>=a[t-1][0]&&x<=(a[t-1][0]+a[t-1][2]))&&(y>=a[t-1][1]&&y<=(a[t-1][1]+a[t-1][3]))){num=t;break;}

 fp=fopen("carpet.out","w");
 fprintf(fp,"%d",num);
 
 
 return 0;    
}
