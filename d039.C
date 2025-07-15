#include<stdio.h>

int main() {
    int t, n, m, total;
    scanf("%d", &t);
    while (t > 0) {
        scanf("%d %d", &n, &m);
        n -= 2;
        m -= 2;
        n = n / 3 + (n % 3 > 0);
        m = m / 3 + (m % 3 > 0);
        total = n * m;
        printf("%d\n", total);
        t--;
    }
    return 0;
}
