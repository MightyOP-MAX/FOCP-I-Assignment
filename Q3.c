#include <stdio.h>
int subtract(int a, int b) {
    return a + (~b + 1);}

int main() {
    int a, b;

    printf("Enter two integers= ");
    scanf("%d %d", &a, &b);

    printf("Result of subtraction = %d\n", subtract(a, b));

    return 0;
}