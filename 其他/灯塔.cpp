#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[5][5]={0},i,j,f=0;
    for(a[4][0]=0;a[4][0]<2;a[4][0]++)
       for(a[4][1]=0;a[4][1]<2;a[4][1]++)
           for(a[4][2]=0;a[4][2]<2;a[4][2]++)
               for(a[4][3]=0;a[4][3]<2;a[4][3]++)
                   for(a[4][4]=0;a[4][4]<2;a[4][4]++)
                        {
                          for(i=3;i>=0;i--)
                              for(j=0;j<=i;j++)
                                 a[i][j]=a[i+1][j]^a[i+1][j+1];
                          if(a[1][1]==1&&a[2][2]==0)
                             {
                                    f=1;
                                    printf("%d %d %d %d %d\n",a[4][0],a[4][1],a[4][2],a[4][3],a[4][4]);
                             }
                        }
    if(f==0)printf("no answer ");
    system("pause");
    return 0;
}
