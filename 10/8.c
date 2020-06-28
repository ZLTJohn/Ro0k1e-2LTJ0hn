#include <stdio.h>

int main()
{
	//freopen("data.in", "r", stdin);
	//freopen("test.out", "w", stdout);
	int n, i, j;
	//printf("Please enter range:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 2; j <= i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)
		{
			printf("%d\n", i);
		}
	}

	return 0;
}