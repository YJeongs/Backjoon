#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char s[1000];
	scanf("%s", s);
	int i;
	scanf("%d", &i);
	char result;
	result = s[i - 1];
	printf("%c", result);
	return 0;
}