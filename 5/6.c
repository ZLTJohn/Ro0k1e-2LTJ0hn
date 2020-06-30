#include <stdio.h>
#include <string.h>
int main()
{
    //    freopen("data.in", "r", stdin);
    //    freopen("test.out", "w", stdout);
    int i, k;
    char n[10][21], m[21];
    for (i = 0; i < 10; i++)
        scanf("%s\n", &n[i]);
    for (i = 0; i < 9; i++) {
        for (k = i + 1; k < 10; k++) {
            if (strcmp(n[i], n[k]) > 0) {
                strcpy(m, n[i]);
                strcpy(n[i], n[k]);
                strcpy(n[k], m);
            }
        }
        printf("%s\n", n[i]);
    }
    printf("%s\n", n[9]);
    return 0;
}