#include <stdio.h>

int main() {
    int rule[6] = {1,1,2,2,2,8};
    int input[6];
    int result[6];
    for(int i = 0; i < 6; i++) {
        scanf("%d", &input[i]);
    }
    for(int j =0; j<6; j++){
        result[j] = rule[j] - input[j];
        printf("%d ", result[j]);
    }
    
}