#include <stdio.h>
int main()
{
    //freopen("data.in", "r", stdin);
    //freopen("test.out", "w", stdout);
    int a;
    int b;
    int c;
    scanf("%d", &a);
    printf("2\n");
    for (b = 2; b <= a; b++)
    {
        for (c = 2; c < b; c++)
        {
            if (b % c == 0)
            {
                break;
            }
            else if (c == b - 1)
            {
                printf("%d\n", b);
            }
        }
    }
    return 0;
}