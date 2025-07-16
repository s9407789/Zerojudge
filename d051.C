#include<stdio.h>

int main () {
    long long f;
    while (scanf("%lld", &f) != EOF) {
        double Celsius = 0;
        Celsius = (double) (f - 32) * 5 / 9 ;
        printf("%.3lf\n", Celsius);
    }
    return 0;
}
