//百钱买百鸡问题：有一个人有一百块钱，打算买一百只鸡。到市场一看，大鸡三块钱一只，
//小鸡一块钱三只，不大不小的鸡两块钱一只。现在，请你编一程序，帮他计划一下，怎么样买法，才能刚好用一百块钱买一百只鸡？
#include<stdio.h>
#include<stdlib.h>

int main()
{
    float m=100,k;
    for(float i=0;i<33;i++)
       {
        for(float j=0;j<50&&m>=0;j++)
           {   
                k=100-i-j;
                if(((100-i-j)/3+3*i+2*j==m)){printf("大%.0f中%.0f小%.0f\n",i,j,k);}
           }
       }
    system("pause");
    return 0;
}
