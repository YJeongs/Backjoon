#include <stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	int basket[100] = {0,}; //초기화
	int i, j, k;
	for (int a = 0; a < m; a++) {
		scanf("%d %d %d", &i, &j, &k);
		for (int b = i; b <= j; b++) {
			basket[b - 1] = k;
		}
	}

	for (int c = 0; c < n; c++) {
		if (basket[c] < 0) {
			basket[c] = 0;
		}
		printf("%d ", basket[c]);
	}
	return 0;
}