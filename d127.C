#include<stdio.h>

int main () {
    long long int L;
    while (scanf("%lld", &L) != EOF) {
        long long int length = 0, wide = 0, area = 0;
        wide = L / 2 / 2;
        length = L / 2 - wide;
        area = wide * length;
        printf("%lld\n", area);
    }
    return 0;
}
