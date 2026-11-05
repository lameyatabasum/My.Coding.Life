#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        long long a, b, n;
        scanf("%lld %lld %lld", &a, &b, &n);
        int count = 0;
        while (a <= n && b <= n) {
            if (a < b) {
                a += b;
            } else {
                b += a;
            }
            count++;
        }
        printf("%d\n", count);
    }
    return 0;
}


