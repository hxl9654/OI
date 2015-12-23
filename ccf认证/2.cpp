#include<stdio.h>
int main()
{
    int a[10] = {0}, i, j = 0, ans = 0;
    char t[20] = {0};
    char ansc;
    scanf("%s", t);
    for(i = 0; t[i] != '\0'; i++)
    {
        if(t[i] == '-');
        else if(t[i] >= '0' && t[i] <= '9')
        {
            a[j] = t[i] - '0';
            j++;
        }
        else if(t[i] == 'X')a[j] = 10;
    }
    for(i = 0; i < 9; i++)
        ans += a[i] * (i + 1);
    ans %= 11;
    if(ans == a[9])
        printf("Right");
    else
    {
        if(ans == 10)ansc = 'X';
        else ansc = ans + '0';
        printf("%d-%d%d%d-%d%d%d%d%d-%c", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], ansc);
    }
    return 0;
}
