#include<stdio.h>

int main() {
    int n ;
    scanf("%d", &n);
    n = (n / 12) * 50 + (n % 12) *5;
    printf("%d\n", n);
    return 0;
}
