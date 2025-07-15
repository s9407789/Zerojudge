#include<stdio.h>

int main() {
    int M, N, pieces;
    while (scanf("%d %d", &M, &N) != EOF) {
        pieces = M * N - 1;
        printf("%d\n", pieces);
    }
    return 0;
}
