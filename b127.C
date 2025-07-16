#include<stdio.h>

int main () {
    int n;
    while (scanf("%d", &n) != EOF) {
        int Fib_antecedent = 0, Fib_consequent = 1;
        int Fib_current = 1;
        for (int i = 3; i <= n + 1; i++) {
            Fib_antecedent = Fib_consequent;
            Fib_consequent = Fib_current;
            Fib_current = Fib_antecedent + Fib_consequent;
        }
        printf("%d\n", Fib_current);
    }
    return 0;
}
