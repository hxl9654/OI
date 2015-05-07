#include<stdio.h>
#include<stdlib.h> 
int main()
{
    struct std
    {
        int num;
        char *name;
        char sex;
        float score;   
    };
    std inf[100];
    inf[0].num=110001;
    inf[0].name="aaa";
    inf[0].sex='b';
    inf[0].score=98.5;
    
    inf[1].num=110002;
    inf[1].name="bbb";
    inf[1].sex='g';
    inf[1].score=97.5;
    
    inf[2].num=110003;
    inf[2].name="ccc";
    inf[2].sex='b';
    inf[2].score=17.5;
    
    inf[3].num=110004;
    inf[3].name="ddd";
    inf[3].sex='g';
    inf[3].score=90.5;
    
    inf[4].num=110005;
    inf[4].name="eee";
    inf[4].sex='b';
    inf[4].score=91.5;
    for(int i=0;i<5;i++)
        {
            printf("%d %s %c %f\n",inf[i].num,inf[i].name,inf[i].sex,inf[i].score);
        }
    system("pause");
}
