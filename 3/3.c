#include <stdio.h>
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int inf = 0x3f3f3f3f;
int main() {
    int a[110][110];
	for (int i = 0; i < 110; i++) {
	    for (int j = 0; j < 110; j++) {
		    a[i][j] = inf;
		}
	}
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
	    for (int j = 1; j <= m; j++) {
		    scanf("%d", &a[i][j]);
		}
	}
	int dir = 0, cnt = 0;
	int x = 1, y = 1;
	printf("%d", a[x][y]);
	a[x][y] = inf;
	while (1) {
	    if (a[x + dx[dir]][y + dy[dir]] == inf) {
		    dir++;
			dir %= 4;
			continue;
		}
		x += dx[dir];
		y += dy[dir];
		printf(" %d", a[x][y]);
		a[x][y] = inf;
		cnt++;
		if (cnt == n * m - 1) {
		    break;
		}
	}
	return 0;
}
