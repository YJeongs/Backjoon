#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	int A[100][100] = { 0, };
	int B[100][100] = { 0, };
	int sum[100][100] = { 0, };

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &A[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &B[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			sum[i][j] = A[i][j] + B[i][j];
			printf("%d ", sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}