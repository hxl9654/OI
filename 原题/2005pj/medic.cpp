#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fin,*fout;
    int t,m,i,j=0,ou=0,out=0,k;
    float a[100][3]={0},te;
    fin=fopen("medic.in","r");
    fout=fopen("medic.out","w");
    fscanf(fin,"%d%d",&t,&m);
    for(i=0;i<m;i++,j++)
        {
            fscanf(fin,"%f%f",&a[j][0],&a[j][1]);
            if(a[j][0]>t)j--; 
        
        }
    for(i=0;i<m;i++)
        a[i][2]=a[i][1]/a[i][0];              
    for(i=0;i<m;i++)
        for(j=i;j<m;j++)
            if(a[i][2]>a[j][2])
                 {
                    te=a[i][0];a[i][0]=a[j][0];a[j][0]=te;
                    te=a[i][1];a[i][1]=a[j][1];a[j][1]=te;
                    te=a[i][2];a[i][2]=a[j][2];a[j][2]=te;//printf("%f %f %f %f \n",a[i][2]) ;
                 }
    for(k=0;k<100;k++)
        for(i=1;i<100;i++)
           { 
             for(j=k;j<m;j=j+i)
                 {
                    te=t;
                    if(a[j][0]>te){te=te-a[j][0];ou=ou+a[j][1];}           
                 }
             if(ou>out)out=ou;
             ou=0;
           }
     fprintf(fout,"%d",out);
     fclose(fin);
     fclose(fout);
     //system("pause");
     return 0;
}
