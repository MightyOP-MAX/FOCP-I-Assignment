#include <stdio.h>
int main() {
    int n, choice, element, pos;

    printf("Enter number of elements= ");
    scanf("%d", &n);

    int arr[n+1];// +1 for when another element is inserted
    

    printf("Enter %d elements=\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nArray before insertion=");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nEnter element to insert= ");
    scanf("%d", &element);

    printf("\n\nInsert at=\n");
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
            pos = n;
            break;

        default:
            printf("Invalid choice\n");
            return 0;
    }

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element;
    n++;

    printf("\nArray after insertion=\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}