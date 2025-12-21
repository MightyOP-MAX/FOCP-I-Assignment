 #include <stdio.h>
int main() {
    int n, a = 0, b = 1, nxt;
    printf("Enter the number of terms= ");
    scanf("%d", &n);

    printf("Fibonacci Series= ");

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d", a);
        } else if (i == 2) {
            printf(", %d", b);
        } else {
            nxt = a + b;
            printf(", %d", nxt);
            a = b;
            b = nxt;
        }
    }
    return 0;
}
