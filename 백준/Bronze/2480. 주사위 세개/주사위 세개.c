#include <stdio.h>

int main() {
    int fir, sec, thr;
    scanf("%d %d %d", &fir, &sec, &thr);
    int reward;

    if ((fir == sec)&&(sec == thr)) {
        reward = 10000 + fir * 1000;
    }
    else if ((fir == sec) || (fir == thr) || (sec == thr)) {
        if (fir == sec) {
            reward = 1000 + fir * 100;
        }
        else if (fir == thr) {
            reward = 1000 + fir * 100;
        }
        else {
            reward = 1000 + sec * 100;
        }
    }
    else if ((fir != sec)&&(sec != thr)) {
        if ((fir > sec) && (fir > thr)) {
            reward = fir * 100;
        }
        else if ((sec > fir) && (sec > thr)) {
            reward = sec * 100;
        }
        else {
            reward = thr * 100;
        }
    }
    printf("%d", reward);
    return 0;
}