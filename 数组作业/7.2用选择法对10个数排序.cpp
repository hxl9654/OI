/*ѡ������:
  ��һ��a[1]��С�� �ڶ���a[2]��С������i��a[i]��С 
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
