#include <stdio.h>
int main() {
    int n, choice, element, pos;

    printf("Enter number of elements= ");
    scanf("%d", &n);

    int ar[n];

    printf("Enter %d elements=\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
    
    printf("\nArray before deletion=");
    for (int i = 0; i < n; i++) {
        printf("%d ", ar[i]);
    }

    printf("\n\nDelete at=\n");
    printf("1. Front\n2. Middle\n3. End\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            pos = 0;
            break;

        case 2:
            pos = n / 2;
            break;

        case 3:
            pos = n-1;
            break;

        default:
            printf("Invalid choice\n");
            return 0;
    }

    for (int i = pos; i <n-1; i++) {
        ar[i] = ar[i + 1];
    }
    n--;

    printf("\nArray after deletion=\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ar[i]);
    }
    return 0;
}