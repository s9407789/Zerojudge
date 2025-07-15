#include<stdio.h>

int main() {
    int a, b, perimeter;
    while (scanf("%d %d", &a, &b) != EOF) {
        perimeter = 2 * (a + b);
        printf("%d\n", perimeter);
    }
    return 0;
}
