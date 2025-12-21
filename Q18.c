#include <stdio.h>
int main() {
    int n, flag = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int ar[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
    printf("Duplicate elements: ");

    for (int i = 0; i < n; i++) {
        int count = 1;

        for (int k = 0; k < i; k++) {
            if (ar[i] == ar[k]) {
                count = 0;
                break;
            }
        }
        
        if (count == 1) {
            int freq = 0;
            for (int j = i + 1; j < n; j++) {
                if (ar[i] == ar[j]) {
                    freq++;
                }
            }

            if (freq > 0) {
                printf("%d ", ar[i]);
                flag = 1;
            }
        }
    }

    if (flag == 0) {
        printf("-1");
    }

    return 0;
}
