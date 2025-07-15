#include<stdio.h>

int main() {
    int m;
    scanf("%d", &m);
    m  = (25 - m + 60) % 60;
    printf("%d\n", m);
    return 0;
}
