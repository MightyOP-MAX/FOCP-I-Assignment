#include <stdio.h>
int main() {
    int n;

    printf("Enter number of elements= ");
    scanf("%d", &n);

    int ar[n];

    printf("Enter %d elements=\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    if (n == 1 || ar[0] >= ar[1]) {// Checking for first element
        printf("Peak element is %d at position 1\n", ar[0]);
    }

    for (int i = 1; i < n - 1; i++) {// Checking for middle element
        if (ar[i] >= ar[i - 1] && ar[i] >= ar[i + 1]) {
            printf("Peak element is %d at position %d\n", ar[i], i+1);
        }
    }

    if (ar[n - 1] >= ar[n - 2]) {// Checking for last element
        printf("Peak element is %d at position %d\n", ar[n - 1], n );
    }
    return 0;
} // we can also use flag concept to tell if peak is not in the array 