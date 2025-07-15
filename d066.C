#include<stdio.h>

int main() {
    int h, m;
    scanf("%d %d", &h, &m);
    if ((16 >= h && h >= 8) || (h == 7 && m >= 30)) {
        printf("At School\n");
    }   else {
        printf("Off School\n");
    }
    return 0;
}
