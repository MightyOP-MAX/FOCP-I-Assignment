#include <stdio.h>
int main() {
    int n;

    printf("Enter number of scores= ");
    scanf("%d", &n);

    int scores[n];
    int even[n]; 
    int odd[n];  
    int even_count = 0, odd_count = 0;// here we took evena and odd count as 0 cause element will store in assigned places with help of loop

    printf("Enter %d scores=\n", n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    for (int i = 0; i < n; i++) {
        if (scores[i] % 2 == 0) {
            even[even_count] = scores[i];
            even_count++;
        } 
        else {
            odd[odd_count] = scores[i];
            odd_count++;
        }
    }

    printf("Even scores= ");
    for (int i = 0; i < even_count; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    printf("Odd scores= ");
    for (int i = 0; i < odd_count; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}
