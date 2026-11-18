#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nAddition = %d", a + b);
    printf("\nSubtraction = %d", a - b);
    printf("\nMultiplication = %d", a * b);

    if (b != 0) {
        printf("\nDivision = %.2f", (float)a / b);
    } else {
        printf("\nDivision is not possible.");
    }

    return 0;
}