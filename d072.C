#include<stdio.h>

int main() {
    int n, y, i;
    scanf("%d", &n);
    while (n > 0) {
        scanf("%d", &y);
        if (y % 400 == 0 || y % 4 == 0 && y % 100 != 0) {
            i++;
            printf("Case %d: a leap year\n", i);
        } else {
            i++;
            printf("Case %d: a normal year\n", i);
        }
        n--;
    }
    return 0;
}
