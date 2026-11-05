#include <stdio.h>
#include <stdlib.h>

// Comparison function — দুইটা element compare করে
int cmp(const void *a, const void *b)
{
    long long x = *(long long*)a;
    long long y = *(long long*)b;
    if (x < y) return -1;
    else if (x > y) return 1;
    else return 0;
}

int main()
{
    int n, q;
    scanf("%d %d", &n, &q);

    long long a[n];
    for (int i = 0; i < n; i++)
        scanf("%lld", &a[i]);

    // Step 1: প্রথমে array টা sort করতে হবে
    qsort(a, n, sizeof(long long), cmp);

    // Step 2: এখন প্রতিটা query-এর জন্য binary search
    while (q--)
    {
        long long x;
        scanf("%lld", &x);

        long long *found = (long long*) bsearch(&x, a, n, sizeof(long long), cmp);

        if (found != NULL)
            printf("found\n");
        else
            printf("not found\n");
    }

    return 0;
}

