#include <stdio.h>

int main() {
    int a, b, c;
    int max;

    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        max = a;
    } else if (b >= c) {
        max = b;
    } else {
        max = c;
    }

    printf("%d eh o maior\n", max);

    return 0;
}