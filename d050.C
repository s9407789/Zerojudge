#include<stdio.h>

int main() {
    int h  ;
    scanf("%d", &h);
    h  = (h - 15 + 24) % 24;
    printf("%d\n", h);
    return 0;
}
