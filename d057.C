#include<stdio.h>

int main() {
    int X1, Y1, X2, Y2, steps = 0;
    scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);
    while (!(X1 == 0 && Y1 == 0 && X2 == 0 && Y2 == 0)) {
        if (X1 == X2 && Y1 == Y2) {
            steps = 0;
        } else if (X1 == X2 || Y1 == Y2 || X1 + Y1 == X2 + Y2 || Y1 - X1 == Y2 - X2) {
            steps = 1;
        } else {
            steps = 2;
        }
        printf("%d\n", steps);
        scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);
    }
    return 0;
}
