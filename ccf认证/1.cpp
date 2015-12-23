#include<stdio.h>
int inf[20000] = {0};
int main()
{
    int n, i, t = 0, ans = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &t);
        inf[t]++;
    }
    t = 0;
    for(i = 0; i <= 10000; i++)
    {
        if(inf[i] > t)
        {
            t = inf[i];
            ans = i;
        }
    }
    printf("%d\n", ans);
    return 0;
}
