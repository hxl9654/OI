#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int x,y,t1,t2,t3,t4;
    printf("请输入一个点（a,b）\n");
    scanf("%d,%d",&x,&y); 
    
    if (sqrt((-x-2)*(-x-2)+(-y-2)*(-y-2))<=1) printf("d=10\n");
    else if (sqrt((-x+2)*(-x+2)+(-y-2)*(-y-2))<=1) printf("d=10\n");
    else if (sqrt((-x+2)*(-x+2)+(-y+2)*(-y+2))<=1) printf("d=10\n");
    else if (sqrt((-x-2)*(-x-2)+(-y+2)*(-y+2))<=1) printf("d=10\n");
    else printf("d=0\n");
    
  system("pause");
  return 0;
}
