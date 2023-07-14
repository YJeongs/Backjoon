#include <stdio.h>

int main() {
	int n;
	scanf("%d\n", &n);
	int num[1000000];
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}
	int max, min;
	max = num[0];
	min = num[0];

	for (int i = 0; i < n; i++) {
		if (num[i] > max) {
			max = num[i];
		}
		else if (num[i] < min) {
			min = num[i];
		}
	}
	printf("%d %d", min, max);
	return 0;
}