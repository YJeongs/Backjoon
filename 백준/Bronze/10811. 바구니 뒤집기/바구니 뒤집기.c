#include <stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	int i, j;
	int basket[100] = { 0, };
	basket[0] = 1;
	for (int i = 0; i < n; i++) {
		basket[i+1] = basket[i] + 1;
	}
	for (int p = 0; p < m; p++) {
		scanf("%d %d", &i, &j);
		int tmp;
		while (i < j) {
			tmp = basket[i - 1];
			basket[i - 1] = basket[j - 1];
			basket[j - 1] = tmp;
			i++; j--;
		}
	}
	for (int q = 0; q < n; q++) {
		printf("%d ", basket[q]);
	}

	return 0;
}