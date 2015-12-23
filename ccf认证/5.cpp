#include<stdio.h>
char mapc[50][50] = {0};
int inf[50][50] = {0};
int r, c;
int si, sj;
int dfs(int x, int y)
{
    int ca = 1, cs = 1, cd = 1, cw = 1;
    int aa = 2, as = 2, ad = 2, aw = 2;
    if(mapc[x][y] == '#')return 2;

    /*printf("%d %d\n",x,y);

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("%d",inf[i][j]);
        }
        putchar('\n');
    }*/


    if(inf[x][y] == 1)return 1;
    //else if(inf[x][y] == 2)return 2;



    inf[x][y] = 3;
    switch(mapc[x][y])
    {
        case 'S':                       break;
        case '+':                       break;
        case '-':cw = 0; cs = 0;        break;
        case '|':ca = 0; cd = 0;        break;
        case '.':cw = 0; ca = 0; cd = 0;break;
        case '#':return 2;              break;
        case 'T':inf[x][y] = 1;         break;
    }
    if(cw == 1 && x > 0     && inf[x - 1][y] != 3)  aw = dfs(x - 1, y);
    if(aw == 1){inf[x][y] = 1; return 1;}
    if(cs == 1 && x < r - 1 && inf[x + 1][y] != 3)  as = dfs(x + 1, y);
    if(as == 1){inf[x][y] = 1; return 1;}
    if(ca == 1 && y > 0     && inf[x][y - 1] != 3)  aa = dfs(x, y - 1);
    if(aa == 1){inf[x][y] = 1; return 1;}
    if(cd == 1 && y < c - 1 && inf[x][y + 1] != 3)  ad = dfs(x, y + 1);
    if(ad == 1){inf[x][y] = 1; return 1;}

    if(aw == 2 && as == 2 && ad == 2 && aa == 2 && inf[x][y] != 1){inf[x][y] = 2; return 2;}
    else {inf[x][y] = 1; return 1;}
}
int main()
{
    int i, j, ans = 0;
    scanf("%d%d", &r, &c);
    for(i = 0; i < r; i++)
    {
        scanf("%s", mapc[i]);
        for(j = 0; j < c; j++)
            if(mapc[i][j] == 'S')
            {
                si = i;
                sj = j;
            }
    }
    i = dfs(si, sj);
    if(i == 2){printf("I'm stuck!\n");return 0;}

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
        {
            if(inf[i][j] == 2)dfs(i, j);
        }

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(inf[i][j] == 2)ans++;
        }
    }
    printf("%d",ans);
    return 0;
}
