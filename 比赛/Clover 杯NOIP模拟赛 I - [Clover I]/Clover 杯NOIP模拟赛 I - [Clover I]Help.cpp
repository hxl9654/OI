#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int inf[50][7]={0};
int tan(int x,int y,int z)
{
    double s,p,a,b,c,s1,s2,s3;
    a=sqrt((inf[z][1]-inf[z][3])*(inf[z][1]-inf[z][3])+(inf[z][2]-inf[z][4])*(inf[z][2]-inf[z][4]));
    b=sqrt((inf[z][3]-inf[z][5])*(inf[z][3]-inf[z][5])+(inf[z][4]-inf[z][6])*(inf[z][4]-inf[z][6]));
    c=sqrt((inf[z][5]-inf[z][1])*(inf[z][5]-inf[z][1])+(inf[z][6]-inf[z][2])*(inf[z][6]-inf[z][2]));
    p=(a+b+c)/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    
    a=sqrt((inf[z][1]-inf[z][3])*(inf[z][1]-inf[z][3])+(inf[z][2]-inf[z][4])*(inf[z][2]-inf[z][4]));
    b=sqrt((inf[z][3]-x)*(inf[z][3]-x)+(inf[z][4]-y)*(inf[z][4]-y));
    c=sqrt((x-inf[z][1])*(x-inf[z][1])+(y-inf[z][2])*(y-inf[z][2]));
    p=(a+b+c)/2;
    s1=sqrt(p*(p-a)*(p-b)*(p-c));
    
    a=sqrt((inf[z][1]-x)*(inf[z][1]-x)+(inf[z][2]-y)*(inf[z][2]-y));
    b=sqrt((x-inf[z][5])*(x-inf[z][5])+(y-inf[z][6])*(y-inf[z][6]));
    c=sqrt((inf[z][5]-inf[z][1])*(inf[z][5]-inf[z][1])+(inf[z][6]-inf[z][2])*(inf[z][6]-inf[z][2]));
    p=(a+b+c)/2;
    s2=sqrt(p*(p-a)*(p-b)*(p-c));
    
    a=sqrt((x-inf[z][3])*(x-inf[z][3])+(y-inf[z][4])*(y-inf[z][4]));
    b=sqrt((inf[z][3]-inf[z][5])*(inf[z][3]-inf[z][5])+(inf[z][4]-inf[z][6])*(inf[z][4]-inf[z][6]));
    c=sqrt((inf[z][5]-x)*(inf[z][5]-x)+(inf[z][6]-y)*(inf[z][6]-y));
    p=(a+b+c)/2;
    s3=sqrt(p*(p-a)*(p-b)*(p-c));
    if(s==s1+s2+s3)return 1;
    else return 0;
}
int main()
{
    int n,i,j,k,out=0;
    scanf("%d",&n);   
    for(i=0;i<n;i++)
        {
            getchar();
            scanf("%c",&inf[i][0]);
            if(inf[i][0]=='T')scanf("%d%d%d%d%d%d",&inf[i][1],&inf[i][2],&inf[i][3],&inf[i][4],&inf[i][5],&inf[i][6]);
            else scanf("%d%d%d",&inf[i][1],&inf[i][2],&inf[i][3]);
        }
    for(i=-49;i<101;i++)
        for(j=-49;j<101;j++)
            for(k=0;k<n;k++)
                {
                    if(inf[k][0]=='C'&&((inf[k][1]-i)*(inf[k][1]-i)+(inf[k][2]-j)*(inf[k][2]-j))<=inf[k][3]*inf[k][3]){out++;break;}
                    else if(inf[k][0]=='S'&&i>=inf[k][1]&&j>=inf[k][2]&&i<=inf[k][1]+inf[k][3]&&j<=inf[k][2]+inf[k][3]){out++;break;}
                    else if(inf[k][0]=='T'&&tan(i,j,k)==1){out++;break;}
                }            
    printf("%d\n",out);
    system("pause");
    return 0;
}
