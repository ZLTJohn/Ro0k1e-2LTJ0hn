#include <stdio.h>
#include <string.h>

int main()
{
    //freopen("data.in", "r", stdin);
    //freopen("test.out", "w", stdout);
    int n;
    scanf("%d\n", &n);
    char name[100][101];
    int i, j;
    char largest[101];
    for (i = 0; i < n; i++)
    {
        for (j = 0; name[i][j-1] != '\n'; j++)
            scanf("%c", &name[i][j]) ;
    }
    for (strcpy(largest, name[0]), i = 1; i < n; i++)
        if (strlen(largest) < strlen(name[i]))
            strcpy(largest, name[i]);
    printf("%s", largest);

    return 0;
}
