#include<stdio.h>
int inf[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
    int year, day, i;
    scanf("%d%d", &year, &day);
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        inf[1]++;
    for(i = 0; i < 12; i++)
    {
        if(day > inf[i])
            day -= inf[i];
        else break;
    }
    printf("%d\n%d", i + 1, day);
    return 0;
}
