#include<stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    a = a + a % 2;
    b = b - b % 2;
    printf("%d\n", (b - a) / 2 + 1);
    return 0;
}
