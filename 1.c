#include <stdio.h>

int main() {
    int num1;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    int num2;
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    // Chacking condation
    if (num1 < num2) {
        printf("The numbers are in ascending order.\n");
    } else if (num1 > num2) {
        printf("The numbers are in descending order.\n");
    } else {
        printf("The numbers are equal.\n");
    }

    return 0;
}

