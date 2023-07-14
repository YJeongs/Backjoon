#include <stdio.h>

int main(){
    int a[3];
    int b[3];
    
    scanf("%1d%1d%1d\n", &a[0], &a[1], &a[2]);
    scanf("%1d%1d%1d", &b[0], &b[1], &b[2]);
    
    int c,d,e,f;
    c = (100*a[0] + 10*a[1] + a[2])*b[2];
    d = (100*a[0] + 10*a[1] + a[2])*b[1];
    e = (100*a[0] + 10*a[1] + a[2])*b[0];
    f = 100*e + 10*d + c;
    
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);
    printf("%d", f);
    return 0;
}