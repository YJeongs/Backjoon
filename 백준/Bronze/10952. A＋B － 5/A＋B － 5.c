#include <stdio.h>

int main() {
	int a, b;
	int cnt = 0;
	while (1) {
		scanf("%d %d\n", &a, &b);
		if (a == 0 && b == 0) {
			break;
		}
		else {
			printf("%d\n", a + b);
		}
	}
	return 0;
	
}