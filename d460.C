#include<stdio.h>

int main() {
    int a = 0;
    scanf("%d", &a);
    a = (a >= 60) * 399 + (59 >= a && a >= 18) * 890 + (17 >= a && a >= 12) * 790 + (11 >= a && a >= 6) * 590;
    printf("%d\n", a);
    return 0;
}
