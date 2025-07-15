#include<stdio.h>

int main() {
    int a, b, c, i = 5, score;
    while (i > 0) {
        scanf("%d %d %d", &a, &b, &c);
        if (a + b > c && b + c > a && a + c > b) {
            score++;
        }
        i--;
    }
    printf("%d\n", score);
    return 0;
}
