#include<stdio.h>

int main() {
    int n, student, max = 0;
    scanf("%d", &n);
    while (n > 0) {
        scanf("%d", &student);
        if (max < student) {
            max = student;
        }
        n--;
    }
    printf("%d\n", max);
    return 0;
}
