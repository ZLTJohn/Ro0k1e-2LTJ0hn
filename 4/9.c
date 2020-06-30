#include <stdio.h>

void swap(int *a, int *b)
{
    int c;
    if (*a <= *b)
    {
        c = *a;
        *a = *b;
        *b = c;
    }
}

int main()
{
    //freopen("data.in", "r", stdin);
    //freopen("test.out", "w", stdout);
    int n = 10;
    int m;
    int numbers[10];
    int i;

    // ¶ÁÈë¸ø¶¨µÄÊý×Ö
    for (i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
            swap(numbers + i, numbers + j);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", numbers[i]);
        if (i != n - 1)
            printf(" ");
    }

    return 0;
}