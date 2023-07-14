#include <stdio.h>

int main() {
	int num[100];
	for (int i = 0; i < 9; i++) {
		scanf("%d", &num[i]);
	}

	int max;
	max = num[0];

	for (int i = 0; i < 9; i++) {
		if (max < num[i]) {
			max = num[i];
		}
	}
	printf("%d\n", max);

	int cnt = 1;
	for (int i = 0; i < 9; i++) {
		if (num[i] != max) {
			cnt += 1;
		}
		else {
			break;
		}
	}
	printf("%d", cnt);
	return 0;
}