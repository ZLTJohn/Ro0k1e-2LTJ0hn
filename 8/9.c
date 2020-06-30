#include <stdio.h>
#include <string.h>
int main()
{
    //freopen("data.in", "r", stdin);
    //freopen("test.out", "w", stdout);
    int n;
    int i, j;
    scanf("%d\n", &n);
    char string[105][105];
    for (i = 0; i < n; i++) {
        for (j = 0; j < 100; j++) {
            scanf("%c", &string[i][j]);
            if (string[i][j] == '\n') {
                string[i][j] = '\0';
                break;
            }
        }
    }
    char str[200];
    for (i = 1; i < n ; i++) {
        if (strlen(string[0]) < strlen(string[i])) {
            strcpy(str, string[0]);
            strcpy(string[0], string[i]);
            strcpy(string[i], str);
        }
    }
    printf("%s", string[0]);
    return 0;
}
