#include<stdio.h>
#include<stdlib.h>
int n,inf[310][310]={0};
int main()
{
    int i,j,k,l,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&inf[i][i]);
    for(i=1;i<n;i++)
       for(j=1;j<=n-i;j++)
          for(k=j;k<j+i;k++)
              {
                if(inf[j][j+i]<(inf[j][k]+inf[k][j+i])>(inf[k][j+i]+inf[j][k])?(inf[j][k]+inf[k][j+i]):(inf[k][j+i]+inf[j][k]))
                  inf[j][j+i]=(inf[j][k]+inf[k][j+i])<(inf[k][j+i]+inf[j][k])?(inf[j][k]+inf[k][j+i]):(inf[k][j+i]+inf[j][k]);
              printf("ijk%d %d %d\n",i,j,k);
              for(l=1;l<=n;l++){for(m=1;m<=n;m++)       printf("%d ",inf[l][m]);printf("\n");}
              }
   for(i=1;i<=n;i++)
   {for(j=1;j<=n;j++)       printf("%d ",inf[i][j]);printf("\n");}
   printf("%d\n",inf[1][n]);
   system("pause");
   return 0;
}
