#include<stdio.h>
int n, inf[1010] = {0};
int main()
{
    int i, j, k, temp, ans = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &inf[i]);
    for(i = 0; i < n; i++)
        for(j = i; j < n; j++)
        {
            temp = 999999;
            for(k = i; k <= j; k++)
            {
                if(inf[k] < temp)
                    temp = inf[k];
            }
            if(ans < temp * (j - i + 1))
                ans = temp * (j - i + 1);
        }
    printf("%d", ans);
    return 0;
}
