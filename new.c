#include <stdio.h>
int main() {
    int t, x, y, n, c, d, f;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        scanf("%d %d %d", &x, &y, &n);
        if (0< n < x) {
            printf("%d\n",n-((n-y+x) % x));
        } else {
            c = n - y;
            d = c % x;
            f = n - d;
            printf("%d\n", f);
        }
    }
    return 0;
}

