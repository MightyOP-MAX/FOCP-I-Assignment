#include <stdio.h>
int prime(int num) {
    if (num <= 1)
        return 0;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n, count = 0;

    printf("Enter number of elements= ");
    scanf("%d", &n);

    int ar[n];

    printf("Enter %d elements=\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    for (int i = 0; i < n; i++) {
        if (prime(ar[i])) {
            count++;
        }
    }
    printf("Number of prime elements in the array = %d\n", count);
    return 0;
}