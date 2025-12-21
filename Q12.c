#include <stdio.h>
int main() {
    int n;
    printf("Enter number of scores= ");
    scanf("%d", &n);

    int scores[n];
    printf("Enter %d scores=\n", n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }
    int max=scores[0]; 
    int min=scores[0]; 

    for (int i = 1; i < n; i++) 
    {
        if (scores[i] > max) {
            max = scores[i];
        } 
            if (scores[i] < min) {
            min = scores[i];
        } 
    }
        printf("Maximun score in the array=%d\n",max);
        printf("Minimun score in the array=%d\n",min);
    return 0;
}