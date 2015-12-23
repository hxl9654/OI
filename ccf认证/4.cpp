#include<stdio.h>
int n, ans =0;
int n0 = 0, n1 = 0, n2 = 1, n3 = 0;
void dfs(int i)
{
    if(i == n)
    {
        if(n0 != 0 && n1 != 0 && n3 != 0)
            {
                ans++;
                ans %= 1000000007;
            }
        return ;
    }
    if(n1 == 0){n0++; dfs(i+1); n0--;}
    if(n3 == 0){n2++; dfs(i+1); n2--;}
    {n1++; dfs(i+1); n1--;}
    {n3++; dfs(i+1); n3--;}
}
int main()
{
    scanf("%d", &n);
    dfs(1);
    printf("%d",ans);
    return 0;
}
