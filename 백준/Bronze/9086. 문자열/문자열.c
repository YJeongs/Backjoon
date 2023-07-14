#include <stdio.h>
#include <string.h>

int main() {
	int t;
	scanf("%d", &t);
	char str[1000]={0,};
	int len;
	for (int i = 0; i < t; i++) {
		scanf("%s", &str);
		len = strlen(str);
		printf("%c%c\n", str[0], str[len-1]);
	}
	return 0;
}