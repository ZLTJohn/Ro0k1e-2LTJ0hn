#include <stdio.h>

int main()
{
    //freopen("data.in", "r", stdin);
    //freopen("test.out", "w", stdout);
    int matrix[100][100];
    int m;
    int n;

    int k = 0;
    int l = 0;
    int num;
    scanf("%d %d", &m, &n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int term = 0;
    while (k < m && l < n) {
        /* Print the first row from the remaining rows */
        for (int i = l; i < n; i++) {
            if (term != 0)
                putchar(' ');
            printf("%d", matrix[k][i]);
            term = 1;
        }
        k++;

        /* Print the last column from the remaining columns */
        for (int i = k; i < m; i++) {
            if (term != 0)
                putchar(' ');
            printf("%d", matrix[i][n - 1]);
            term = 1;
        }
        n--;

        /* Print the last row from the remaining rows */
        if (k < m) {
            for (int i = n - 1; i >= l; i--) {
                if (term != 0)
                    putchar(' ');
                printf("%d", matrix[m - 1][i]);
                term = 1;
            }
            m--;
        }

        /* Print the first column from the remaining columns */
        if (l < n) {
            for (int i = m - 1; i >= k; i--) {
                if (term != 0)
                    putchar(' ');
                printf("%d", matrix[i][l]);
                term = 1;
            }
            l++;
        }
    }

    return 0;
}