#include<stdio.h>
 int a[200000][2]={0};
 int b[100000][2]={0};
int main()
{
 FILE *fp;
 fp=fopen("hotel.in","r");
 int n,k,p,i,t,j;
 int num=0;
 float nums=0.0;
 memset(a,0,sizeof(a));
 memset(b,0,sizeof(b));
 fscanf(fp,"%d %d %d\n",&n,&k,&p);
 for(t=0;t<n;t++)
    fscanf(fp,"%d %d\n",&a[t][0],&a[t][1]);
 
 for(i=0;i<n;i++)
    for(j=(i+1);j<n;j++)
       if(a[i][0]==a[j][0]){b[num][0]=i;b[num][1]=j;num++;}
 b[num][0]=200001;
 
 for(num=0;b[num][0]!=200001;num++)
     for(i=b[num][0];i<=b[num][1];i++)
         if(a[i][1]<=p){nums++;break;}
         
 fclose(fp);      
 fp=fopen("hotel.out","w");

 fprintf(fp,"%.0f",nums);

 fclose(fp);
 return 0;
}

