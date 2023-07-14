#include <stdio.h>

int main() {
    int stmin, stsec, dur;
    scanf("%d %d\n", &stmin, &stsec);
    scanf("%d", &dur);
    int clmin, clsec;
    if ((stsec + dur) <= 59) {
        clmin = stmin;
        clsec = stsec + dur;
    }
    else {
        clmin = stmin + (stsec + dur)/60;
        clsec = (stsec + dur) % 60;
        if (clmin >= 24){
            clmin = clmin - 24;
        }
    }
    printf("%d %d", clmin, clsec);
    return 0;
}