#include <stdio.h>

int main(void)
{
    int H, M;
    scanf("%d %d", &H, &M);
    
    if (H == 0)
    {
        if (M < 45)
            M += 15, H = 23;
        else
            M -= 45;
    }
    else
    {
        if (M < 45)
            M += 15, H -= 1;
        else
            M -= 45;
    }
    
    printf("%d %d", H, M);
    return 0;
}