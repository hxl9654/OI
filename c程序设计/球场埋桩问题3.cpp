#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int x,y,n;
    float t1,t2,t3,t4;
    printf("请输入一个点（a,b）\n");
    scanf("%d,%d",&x,&y); 
    t1=sqrt((-x-2)*(-x-2)+(-y-2)*(-y-2));
    t2=sqrt((-x+2)*(-x+2)+(-y-2)*(-y-2));
    t3=sqrt((-x+2)*(-x+2)+(-y+2)*(-y+2));
    t4=sqrt((-x-2)*(-x-2)+(-y+2)*(-y+2));
  
    
    n=(t1<=1||t2<=1||t3<=1||t4<=0)? 1:0;
    
    if (n==1) printf("d=10\n");
    else printf("d=0\n");
    
  system("pause");
  return 0;
}
