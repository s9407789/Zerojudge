#include<stdio.h>
#include<math.h>

int main () {
    int a, b, c;
    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
        int discriminant;
        discriminant = b * b - 4 * a *c;
        if (discriminant > 0) {
            int x1 = 0;
            int x2 = 0;
            x1 = (- b + sqrt(discriminant)) / (2 * a);
            x2 = (- b - sqrt(discriminant)) / (2 * a);
            printf("Two different roots x1=%d , x2=%d\n", x1, x2);
        } else if (discriminant == 0) {
            int x = 0;
            x = - b / (2 * a);
            printf("Two same roots x=%d\n", x);
        } else {
            printf("No real root");
        }
    }
    return 0;
}
