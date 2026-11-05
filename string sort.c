#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    const char *names[] = {"Lameya", "Riya", "Anika", "Borno"};
    int n = sizeof(names) / sizeof(names[0]);

    qsort(names, n, sizeof(char *), compare);

    for (int i = 0; i < n; i++)
        printf("%s\n", names[i]);
}

