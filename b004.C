#include<stdio.h>
#include<math.h>

int main () {
    int D, L;
    while (scanf("%d %d", &D, &L) != EOF) {
        double half_edge_long;
        double half_edge_short;
        double area = 0;

        half_edge_long =(double)L / 2;
        half_edge_short = sqrt((double)L * L / 4 - (double)D * D / 4);
        area = 2 * acos((double)0) * half_edge_long * half_edge_short;

        printf("%.3lf\n", area);
    }
    return 0;
}
