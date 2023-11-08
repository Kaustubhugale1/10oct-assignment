#include <stdio.h>

int main() {

    // Tacking two input value
    int start,sum = 0;
    printf("Enter the start number: ");
    scanf("%d", &start);

    int end;
    printf("Enter the end number: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++) {
        if (i % 17 != 0) {
            sum += i;
        }
    }

    printf("Sum of numbers not divisible by 17 between %d and %d is: %d\n", start, end, sum);

    return 0;
}

