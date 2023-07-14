#include <stdio.h>

int main() {
    int T;
    scanf("%d\n", &T);
    int a, b;
    for (int i = 1; i <= T; i++) {
        scanf("%d %d\n", &a, &b);
        printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
    }
    return 0;
}