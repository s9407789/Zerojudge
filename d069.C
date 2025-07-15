#include<stdio.h>

int main() {
    int t,y;
    scanf("%d", &t);
    while (t > 0) {
        scanf("%d", &y);
        if (y % 400 == 0 || y % 4 == 0 & y % 100 != 0) {
            printf("a leap year\n");
        } else {
            printf("a normal year\n");
        }
        t--;
    }
    return 0;
}
