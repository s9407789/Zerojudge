#include<stdio.h>

int main () {
    unsigned int a, b;
    while (scanf("%u %u", &a, &b) != EOF) {
        unsigned int gcd = 0;
        if (a == b) {
            gcd = a;
        } else {
            unsigned int a1 = a, b1 = b;
            unsigned int t = 0;
            if (a1 > b1) {
                t = a1;
                a1 = b1;
                b1 = t;
            }
            while (gcd == 0) {
                if (b1 % a1 == 0) {
                    gcd = a1;
                    break;
                } else {
                    b1 = b1 % a1;
                }
                if (a1 % b1 == 0) {
                    gcd = b1;
                    break;
                } else {
                    a1 = a1 % b1;
                }
            }

        }
        printf("%u\n", gcd);
    }

    return 0;
}
