#include <stdio.h>

int c(int n, int m)
{
    if (n > m / 2)
        n = m - n;
    long long int ret = 1, i = 0;
    for (i = m - n + 1; i <= m; i++)
        ret *= i;
    for (i = 1; i <= n; i++)
        ret /= i;
    return ret;
}
int main()
{
    //freopen("data.in", "r", stdin);
    //freopen("test.out", "w", stdout);
    int n;
    scanf("%d", &n);
    int i = 0;
    int x;
    int y;
    int m = 1;
    int b = 1;
    for (x = 0; x <= n / 2; x++)
    {
        for (y = 0; y <= n / 3; y++)
        {
            if (x * 2 + y * 3 == n)
            {
                i += c(x, x + y);
            }
        }
    }
    printf("%d", i);
    return 0;
}