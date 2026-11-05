#include <stdio.h>

int main() {
    int octal;
    printf("Enter an octal number: ");
    scanf("%d", &octal);

    printf("Binary equivalent: ");
    int n = octal;
    int digit;

    while (n > 0) {
        digit = n % 10;
        switch (digit) {
            case 0: printf("000"); break;
            case 1: printf("001"); break;
            case 2: printf("010"); break;
            case 3: printf("011"); break;
            case 4: printf("100"); break;
            case 5: printf("101"); break;
            case 6: printf("110"); break;
            case 7: printf("111"); break;
            default: printf("\nInvalid octal digit!"); return 0;
        }
        n /= 10;
    }
    printf("\n");
    return 0;
}

