#include <stdio.h>
int main() {
    int n;
    
    printf("Enter number students in marks array= ");
    scanf("%d", &n);

    int mark[n];

    printf("Enter Marks of Students=\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &mark[i]);
    }

    int found = 0; // we use flag concept to check if 99 is found
    for (int i = 0; i < n; i++) {
        if (mark[i] == 99) {
            printf("Occurrence of Marks=99 is at position %d\n",i+1);
            found=found+1;
        }
    }

    if (!found) 
    {
        printf("Marks=99 not found in the array.\n");
    }
    printf("No. of Students with Marks=99 are %d ",found);
    return 0;
}