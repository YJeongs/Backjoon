#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int N;
    N = n/4;
    for (int i = 0; i < N; i++) {
        printf("long ");
    }
    printf("int");
    return 0;
}