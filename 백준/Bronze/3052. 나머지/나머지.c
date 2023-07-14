#include <stdio.h>

int main() {
	int num[10] = { 0, };
	int mod[10] = { 0, };
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
		mod[i] = num[i] % 42;
	}

	int count = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = i+1; j < 10; j++) {
			if (mod[i] == mod[j]) {
				mod[i] = -1;
			}
		}
		if (mod[i] != -1) {
			count += 1;
		}
	}
	printf("%d\n", count);

	return 0;
}