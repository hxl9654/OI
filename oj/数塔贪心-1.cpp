#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j=0,inf[5][5]={{1},{8,1},{1,7,1},{1,9,1,2},{1,8,1,1,1}},way[5]={0},s=0;
    s++;
    for(i=1;i<5;i++)
      {
         if(inf[i][j]>inf[i][j+1])
            {
                s=s+inf[i][j];
                way[i]=j;
            }           
         else 
            {
                s=s+inf[i][j+1];
                way[i]=j+1;
                j++;      
            }
      }
    printf("%d\n",s);
    for(i=0;i<4;i++)
        printf("(%d,%d)->",i,way[i]);
    printf("(%d,%d)",4,way[4]);
    system("pause");
    return 0;
} 
