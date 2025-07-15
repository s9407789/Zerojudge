#include<stdio.h>

int main() {
    int a, b, amount, sum;
    scanf("%d %d", &a, &b);
    a = a + a % 2;
    b = b - b % 2;
    amount = (b - a) / 2 + 1;
    sum = (a + b) * amount / 2;
    printf("%d\n", sum);
    return 0;
}
