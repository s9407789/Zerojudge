#include<stdio.h>

int main () {
    long long n;
    scanf("%lld", &n);
    while (n > 0) {
        long long f;
        long long total = 0;
        scanf("%lld", &f);
        while (f > 0) {
            long long area, amounts, level;
            scanf("%lld %lld %lld", &area, &amounts, &level);

            long long money = 0;
            money = area * level;
            total += money;

            f--;
        }
        printf("%lld\n", total);

        n--;
    }
    return 0;
}
