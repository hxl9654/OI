//"	������5��
//"	��Ŀ��������������x,y,z���������������С���������
//"	.���������������취����С�����ŵ�x�ϣ��Ƚ�x��y���бȽϣ����x>y��x��y��ֵ���н�����
//Ȼ������x��z���бȽϣ����x>z��x��z��ֵ���н�����������ʹx��С��

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,c,t;
    printf("�������������е���������x,y,z\n");
    scanf("%d,%d,%d",&a,&b,&c);
    
    if(a>b){t=a;a=b;b=t;}
    if(a>c){t=a;a=c;c=t;}
    if(b>c){t=b;b=c;c=t;}
    
    printf("���к�����ǣ�%d,%d,%d\n",a,b,c);
    
    system("pause");
    return 0;
}

