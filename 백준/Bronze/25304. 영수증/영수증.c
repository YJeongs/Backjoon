#include <stdio.h>

int main(){
    int total, num;
    scanf("%d\n", &total);
    scanf("%d\n", &num);
    int a, b;
    int sum = 0;
    for(int i = 0; i < num; i++) {
        scanf("%d %d\n", &a, &b);
        sum += a*b;
    }
    if (total == sum) {
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}