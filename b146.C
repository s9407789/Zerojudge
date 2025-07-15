#include<stdio.h>

int main() {
    int t = 7, a, b, day = 0, unhappyday = 0, level;
    while (t > 0) {
        scanf("%d %d", &a, &b);
        day++;
        if ((unhappyday == 0 || level < a + b) && a + b > 8) {
            unhappyday = day;
            level = a + b;
        }
        t--;
    }
    printf("%d\n", unhappyday);
    return 0;
}
