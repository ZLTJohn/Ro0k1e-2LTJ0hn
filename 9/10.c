#include <stdio.h>
int f(int n)
{
    if (n <= 3)
    {
        return n != 1;
    }
    else
    {
        return f(n - 2) + f(n - 3);
    }
}
int main()
{
    //freopen("data.in", "r", stdin);
    //freopen("test.out", "w", stdout);
    int n;
    scanf("%d", &n);
    printf("%d", f(n));
    return 0;
}