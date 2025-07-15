#include<stdio.h>

int main() {
    int a, b, i, count = 0;
    while (scanf("%d %d", &a, &b) != EOF) {
        for (i = a; i <= b; i++) {
            if (i % 400 == 0 || i % 4 == 0&& i % 100 != 0) {
                count++;
            }
        }
        printf("%d\n", count);
        count = 0;
    }
    return 0;
}
