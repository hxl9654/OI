#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int x,y,h;
    float t1,t2,t3,t4;
    printf("请输入一个点（a,b）\n");
    scanf("%d,%d",&x,&y); 
    h=10;
    t1=sqrt((-x-2)*(-x-2)+(-y-2)*(-y-2));
    t2=sqrt((-x+2)*(-x+2)+(-y-2)*(-y-2));
    t3=sqrt((-x+2)*(-x+2)+(-y+2)*(-y+2));
    t4=sqrt((-x-2)*(-x-2)+(-y+2)*(-y+2));
    
    if(t1>1 && t2>1 && t3>1 && t4>1)h=0;
    
    printf("点的高度为h=%d",h);
    
    
    
  system("pause");
  return 0;
}
