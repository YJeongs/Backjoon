#include <stdio.h>

int main() {
	int n, x;
	scanf("%d %d", &n, &x);
	int num[10000];
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}
	for (int j = 0; j < n; j++) {
		if (num[j] < x) {
			printf("%d ", num[j]);
		}
	}
	return 0;
}