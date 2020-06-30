#include <stdio.h>

int main()
{
    //freopen("data.in", "r", stdin);
    //freopen("test.out", "w", stdout);
    int i, N, x;
    int a[51] = { 1 };
    scanf("%d", &N);
    a[2] = 1;
    a[3] = 1;
    for (i = 3; i <= N; i++) {
        a[i] = a[i - 2] + a[i - 3];
    }
    printf("%d", a[N]);
    return 0;
}