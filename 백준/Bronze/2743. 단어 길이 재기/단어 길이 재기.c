#include <stdio.h>

int main() {
	char a[100] = {0,};
	gets(a);
	int cnt = 0;
	int i = 0;
	for (int i = 0; i < 100; i++) {
		if (a[i] != 0) {
			cnt += 1;
		}
	}
	printf("%d", cnt);
	return 0;
}