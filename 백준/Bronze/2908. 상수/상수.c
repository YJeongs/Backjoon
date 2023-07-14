#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char num1[4]={0,};
	char num2[4]={0,};
	scanf("%s %s", num1, num2);
	char num3[4] = {0,};
	char num4[4] = {0.};
	int j = 0;
	for (int i = 2; i >= 0; i--) {
		num3[i] = num1[2 - i];
		num4[i] = num2[2 - i];
	}

	if (atoi(num3) > atoi(num4)) {
		printf("%d\n", atoi(num3));
	}
	else {
		printf("%d", atoi(num4));
	}
	return 0;
}