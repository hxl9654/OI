//"	【程序5】
//"	题目：输入三个整数x,y,z，请把这三个数由小到大输出。
//"	.程序分析：我们想办法把最小的数放到x上，先将x与y进行比较，如果x>y则将x与y的值进行交换，
//然后再用x与z进行比较，如果x>z则将x与z的值进行交换，这样能使x最小。

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,c,t;
    printf("请输入用于排列的三个整数x,y,z\n");
    scanf("%d,%d,%d",&a,&b,&c);
    
    if(a>b){t=a;a=b;b=t;}
    if(a>c){t=a;a=c;c=t;}
    if(b>c){t=b;b=c;c=t;}
    
    printf("排列后的数是：%d,%d,%d\n",a,b,c);
    
    system("pause");
    return 0;
}

