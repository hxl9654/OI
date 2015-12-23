#include<stdio.h>
int main()
{
    int n, i, t1, t2 = 9999, ans = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &t1);
        if(t1 != t2)
        {
            t2 = t1;
            ans ++;
        }
    }
    printf("%d", ans);
    return 0;
}
