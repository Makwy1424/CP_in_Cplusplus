#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char all_cm[100][100];

void all_pm(char *s, int k, char *str)
{
    static int j;
    printf("%d= ", j);
    printf("%s", s);
    if (k == strlen(s))
    {
        strcpy(all_cm[j], s);
        return;
    }

    for (int i = 0; i < strlen(s); i++)
    {
        s[k] = str[i];
        all_pm(s, k + 1, str);
    }
}

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    char str[100];
    scanf("%s", str);

    char *ans = (char *)malloc(sizeof(char) * 100);
    strcpy(ans, "");
    all_pm(ans, 0, str);

    for (int i = 0; i < 9; i++)
    {
        printf("%s\n", all_cm[i]);
    }

    return 0;
}