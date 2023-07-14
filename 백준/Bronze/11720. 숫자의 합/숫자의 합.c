#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int sum = 0;
	int num[100]={0,};
	for (int i = 0; i < n; i++) {
		scanf("%1d", &num[i]);
		sum += num[i];
	}
	printf("%d", sum);
	return 0;
}