#include <stdio.h>
int main() {
    int n;
    
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int ar[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    int found = 0; // we use flag concept to check if 99 is found
    for (int i = 0; i < n; i++) {
        if (ar[i] == 99) {
            printf("First occurrence of 99 is at position %d\n",i+1);
            found = 1;
            break;
        }
    }

    if (!found) 
    {
        printf("Score 99 not found in the array.\n");
    }
    return 0;
}