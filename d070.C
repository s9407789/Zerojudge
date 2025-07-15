#include<stdio.h>

int main() {
    int y;
    scanf("%d", &y);
    while (y != 0) {
        if (y % 400 == 0 || y % 4 == 0 && y % 100 != 0) {
            printf("a leap year\n");
        } else {
            printf("a normal year\n");
        }
        scanf("%d", &y);
    }
    return 0;
}
