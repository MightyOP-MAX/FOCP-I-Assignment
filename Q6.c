#include <stdio.h>
int main() {
    int choice;
    int decimal, binary, rem;
    
    printf("Choose Conversion:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a binary number= ");
        scanf("%d", &binary);

        decimal = 0;
        int base = 1;

        while (binary > 0) {
            rem = binary % 10;
            decimal += rem * base;
            base *= 2;
            binary /= 10;
        }
        printf("Decimal: %d\n", decimal);
    } 
    else if (choice == 2) {
        printf("Enter a decimal number= ");
        scanf("%d", &decimal);

        binary = 0;
        int place = 1;

        while (decimal > 0) {
            rem = decimal % 2;
            binary += rem * place;
            decimal /= 2;
            place *= 10;
        }
        printf("Binary: %d\n", binary);
    } 
    else {
        printf("Invalid choice\n");
    }
    return 0;
}