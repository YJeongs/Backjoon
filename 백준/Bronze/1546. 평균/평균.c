#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	float grade[1000] = { 0, };
	for (int i = 0; i < n; i++) {
		scanf("%f", &grade[i]);
	}
	int max;
	max = grade[0];
	for (int i = 1; i < n; i++) {
		if (max < grade[i]) {
			max = grade[i];
		}
	}
	float avg = 0.0;
	for (int j = 0; j < n; j++) {
		grade[j] = grade[j] / max * 100;
		avg += grade[j];
	}
	avg = avg / n;
	printf("%f", avg);

	return 0;
}