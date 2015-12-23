#include<stdio.h>
#include<string.h>
char data[120][120] = {'\0'};
char todo[120][2][120] = {'\0'};
char lst[120][20] = {'\0'};
int lstn[120][3] = {0};
int lstni = 0;
int main()
{
    int n, m, i, j, k, l, flag;
    int tl, tr;
    char t[200] = {'\0'};
    scanf("%d%d", &m, &n);
    getchar();
    for(i = 0; i < m; i++)
        gets(data[i]);
    for(i = 0; i < n; i++)
    {
        gets(t);
        for(j = 0; t[j] != ' '; j++)
            todo[i][0][j] = t[j];
        for(k = j + 2; t[k] != '\"'; k++)
            todo[i][1][k - j - 2] = t[k];
    }
    for(i = 0; i < m; i++)
    {
        flag = 0;
        lstni = 0;
        for(j = 0; data[i][j] != '\n'; j++)
            if(data[i][j] == ' ' && data[i][j - 1] == '{' && data[i][j - 2] == '{')
            {
                flag = 1;
                k = j;
            }
            else if(flag == 1 && data[i][j] == '}' && data[i][j - 1] == '}' && data[i][j - 2] == ' ')
            {
                flag = 0;
                lstn[lstni][0] = i;
                lstn[lstni][1] = k - 2;
                lstn[lstni][2] = j + 1;
                for(l = k + 1; l < j - 2; l++)
                    lst[lstni][l - k - 1] = data[i][l];
                lstni++;
            }
        tl = 0;
        tr = 0;
        l = 0;
        if(l < lstni)
        {
            tl = lstn[l][1];
            tr = lstn[l][2];
            l++;
        }
        for(j = 0; data[i][j] != '\0'; j++)
        {
            if(j < tl)
                putchar(data[i][j]);
            else if(j >= tr)
            {
                if(l < lstni)
                {
                    tl = lstn[l][1];
                    tr = lstn[l][2];
                    l++;
                    j--;
                }
                else putchar(data[i][j]);
            }
            else if(j == tl)
            {
                for(k = 0; k < n; k++)
                    if(strcmp(lst[l-1],todo[k][0]) == 0)
                    {
                        printf("%s", todo[k][1]);
                        break;
                    }
            }
            else ;
        }
        putchar('\n');
    }
    return 0;
}
