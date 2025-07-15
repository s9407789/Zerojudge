#include<stdio.h>

int main() {
    int a, b, c, s;
    scanf("%d %d %d", &a, &b, &c);
    s = (a + b + c) / 2;
    s = s * (s - a) * (s - b) * (s - c);
    printf("%d\n", s);
    return 0;
}
