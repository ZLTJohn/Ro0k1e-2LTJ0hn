#include <math.h>
#include <stdio.h>

int main()
{
    //   freopen("data.in", "r", stdin);
    //   freopen("test.out", "w", stdout);
    int matrix[100][100];
    int m;
    int n;
    int i, j;
    int x;
    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int term = 0;
    x = 0;
    while (n - x > x && m - x > x) {
        for (j = x; j <= n - 1 - x; j++) {
            if (term == 1)
                putchar(' ');
            printf("%d", matrix[x][j]);
            term = 1;
        }
        for (i = x + 1; i <= m - 1 - x; i++) {
            if (term == 1)
                putchar(' ');
            printf("%d", matrix[i][n - 1 - x]);
            term = 1;
        }

        if (m - 1 - x > x)
            for (j = x + 1; j < n - 1 - x; j++) {
                if (term == 1)
                    putchar(' ');
                printf("%d", matrix[m - 1 - x][n - 1 - j]);
                term = 1;
            }
        if (n - 1 - x > x)
            for (i = x; i < m - 1 - x; i++) {
                if (term == 1)
                    putchar(' ');
                printf("%d", matrix[m - 1 - i][x]);
                term = 1;
            }
        x++;
    }

    return 0;
}