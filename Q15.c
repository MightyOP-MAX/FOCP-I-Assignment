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

    int last = ar[n - 1];

    for (int i = n - 1; i > 0; i--) {
        ar[i] = ar[i - 1];
    }

    ar[0] = last;

    printf("Array after clockwise rotation=\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ar[i]);
    }
    return 0;
}