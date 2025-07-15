#include<stdio.h>

int main() {
    int a, b, c, d, degree = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    while (!(a == 0 && b == 0 && c == 0 && d == 0)) {
        degree += 360*2;
        degree += ((a - b + 40) % 40) * 360 / 40;
        degree += 360;
        degree += ((c - b + 40) % 40) * 360 / 40;
        degree += ((c - d + 40) % 40) * 360 / 40;
        printf("%d\n", degree);
        scanf("%d %d %d %d", &a, &b, &c, &d);
    }
    return 0;
}
