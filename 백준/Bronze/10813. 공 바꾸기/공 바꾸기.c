#include <stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	int basket[100]={0,};
	basket[0] = 1;
	for (int a = 0; a < n; a++) {
		basket[a+1] = basket[a] + 1;
	}
	int i, j;
	for (int p = 0; p < m; p++) {
		scanf("%d %d", &i, &j);
		int tmp;
		tmp = basket[i - 1];
		basket[i - 1] = basket[j - 1];
		basket[j - 1] = tmp;
	}
	for (int q = 0; q < n; q++) {
		if (basket[q] < 0) {
			basket[q] = 0;
		}
		printf("%d ", basket[q]);
	}
	return 0;
}