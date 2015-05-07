/*选择法排序:
  第一趟a[1]最小， 第二趟a[2]最小……第i趟a[i]最小 
  6  90  45  56  1  15  44  78  58  101 
*/ 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    int a[10]={6,90,45,56,1,15,44,78,58,101};
    for(int i=0;i<9;i++)
        for(int j=i+1;j<10;j++)
            if(a[j]<a[i]){t=a[i];a[i]=a[j];a[j]=t;}
    for(int i=0;i<10;i++)
        printf("%d ",a[i]);
    system("pause");
    return 0; 
}
