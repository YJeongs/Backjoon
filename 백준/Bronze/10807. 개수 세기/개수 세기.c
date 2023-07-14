#include <stdio.h>

int main() {
	int n;
	scanf("%d\n", &n);
	int num[100];
	for (int i = 0; i < n; i++) {
		scanf("%d ", &num[i]);
	}
	int v;
	scanf("%d", &v);
	int cnt = 0;
	for (int j = 0; j < n; j++) {
		if (num[j] == v) {
			cnt += 1;
		}
	}
	printf("%d", cnt);
	return 0;
}