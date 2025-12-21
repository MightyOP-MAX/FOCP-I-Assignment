#include <stdio.h>
int main() {
    int r ;// r is rows

printf("Enter No. of Rows= ");
    scanf("%d",&r);

    for (int i = 1; i <= r; i++) 
    {
        for (int j = 1; j <= r - i; j++)// for printing starting spaces
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) // for start of each row printing before space
        {   
            printf("%d", j % 2);
        }

        printf(" ");

        for (int j = 1; j <= i; j++)  // for printing after space
        {   
            printf("%d", j % 2);
        }
        printf("\n"); 
    }
    return 0;
}