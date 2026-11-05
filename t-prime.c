#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(long long n) {
    if (n < 2) return false;
    if (n % 2 == 0 && n != 2) return false;
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        long long x;
        scanf("%lld", &x);

        long long root = sqrt(x);  // square root বের করা

        if (root * root == x && isPrime(root))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
