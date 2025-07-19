#include<stdio.h>

int main () {
    char alphabet;
    int number;
    while (scanf(" %c%d", &alphabet, &number) != EOF) {
        int total = 0;
        total += number % 10;
        number = number / 10;
        for (int i = 1; i <= 8; i++) {
            total += number * i;
            number = number / 10;
        }

        if (65 <= alphabet && alphabet <= 72 || alphabet == 87) {
            alphabet -= 55;
        } else if (alphabet == 73) {
            alphabet -= 39;
        } else if (74 <= alphabet && alphabet <= 78) {
            alphabet -= 56;
        } else if (alphabet == 79) {
            alphabet -= 44;
        } else if (80 <= alphabet && alphabet <= 86 || alphabet == 90) {
            alphabet -= 57;
        } else {
            alphabet -= 58;
        }
        total += alphabet / 10 + (alphabet % 10) * 9;

        if (total % 10 == 0) {
            printf("real\n");
        } else {
            printf("fake\n");
        }
    }
    return 0;
}
