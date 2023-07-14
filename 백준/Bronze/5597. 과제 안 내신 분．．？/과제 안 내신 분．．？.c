#include <stdio.h>

int main() {
	int num[100] = { 0, };
	int attend[100] = { 0, };
	num[0] = 1;
	for (int i = 0; i < 30; i++) {
		num[i + 1] = num[i] + 1;
	}


	for (int j = 0; j < 28; j++) {
		scanf("%d\n", &attend[j]);
	}

	for (int k = 0; k < 30; k++) {
		for (int p = 0; p < 28; p++) {
			if (num[k] == attend[p]) {
				num[k] = num[k] - attend[p];
			}
		}
	}
	for (int i = 0; i < 30; i++) {
		if (num[i] > 0) {
			printf("%d\n", num[i]);
        }
	}

	return 0;
}