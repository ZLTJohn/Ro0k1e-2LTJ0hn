#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d\n", &n);
    char name[105][105];
    char temp[105];

    for (int i = 0; i < n; i++) {
        gets(name[i]);
    }

    for (int j = 0; j < n; j++) {
        for (int k = 0; k < n; k++) {
            char temp[105];
            if ((strlen(name[j]) > strlen(name[k]))) {
                strcpy(temp, name[j]);
                strcpy(name[j], name[k]);
                strcpy(name[k], temp);
            }
        }
    }
    printf("%s\n", name[0]);
    return 0;
}
