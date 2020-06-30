#include <stdio.h>

int main()
{
    //freopen("data.in", "r", stdin);
    //freopen("test.out", "w", stdout);
    int n = 10;
    int m;
    int numbers[10];
    int i;
    int max;
    int inter;
    // ¶ÁÈë¸ø¶¨µÄÊý×Ö
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i <= 9; i++) {
        max = i;
        for (m = i; m <= 8; m++) {
            if (numbers[max] < numbers[m + 1]) {
                max = m + 1;
            }
        }
        inter = numbers[i];
        numbers[i] = numbers[max];
        numbers[max] = inter;
    }

    for (i = 0; i <= 9; i++) {
        printf("%d", numbers[i]);
        if (i != 9) {
            printf(" ");
        }
    }

    return 0;
}