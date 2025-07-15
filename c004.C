#include<stdio.h>

int main() {
    int t, s, d;
    scanf("%d", &t);
    while (t > 0) {
        scanf("%d %d", &s, &d);
        if (s < d || (s + d) % 2 == 1) {
            printf("impossible\n");
        } else {
            s = (s + d) / 2;
            d = s - d;
            printf("%d %d\n", s, d);
        }
        t--;
    }
    return 0;
}
