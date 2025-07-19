#include<stdio.h>

int main () {
    char ch;
    int apostrophe_count = 0;
    while (scanf("%c", &ch) != EOF) {
        if (ch == '"') {
            apostrophe_count++;
        } else {
            printf("%c", ch);
        }
        if (apostrophe_count % 2 == 1 && ch == '"') {
            printf("``");
        } else if (apostrophe_count % 2 == 0 && ch == '"'){
            printf("''");
        }
    }
    return 0;
}
