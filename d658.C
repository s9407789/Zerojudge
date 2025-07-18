#include<stdio.h>
#include<math.h>

int main () {
    int N;
    int i = 0;
    while(scanf(" %d", &N) && N > 0) {
        i++;
        int count = 0;
        int base_two = 1;
        for (int j = 1; base_two < N; j++) {
            base_two = (int) pow(2, j);
            count++;
        }
        printf("Case %d: %d\n", i, count);
    }
    return 0;
}
