#include <math.h>
#include <stdio.h>
#define EPSILON 1e-7

double bisection(int p, int q, double (*func)(int, int, double));
double f(int p, int q, double x);
int main()
{
    //    freopen("data.in", "r", stdin);
    //    freopen("test.out", "w", stdout);

    int p;
    int q;
    scanf("%d%d", &p, &q);
    printf("%.4f\n", bisection(p, q, f));
    return 0;
}

double bisection(int p, int q, double (*func)(int, int, double))
{
    double a = -20;
    double b = 20;
    while (fabs(f(p, q, (a + b) / 2)) >= EPSILON) {
        if (f(p, q, (a + b) / 2) * f(p, q, b) < 0)
            a = (a + b) / 2;
        else
            b = (a + b) / 2;
    }
    return (a + b) / 2;
}

double f(int p, int q, double x)
{
    return p * x + q;
}