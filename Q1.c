#include <stdio.h>
#include <math.h> 
int main() {
    int num, orig, remainder, digits = 0;
    double result= 0.0; // previous error => int result=0; as power function gives double value output result should be double 

    printf("Enter a number: ");
    scanf("%d", &num);

    orig = num;

    while (orig != 0) 
    {
        orig = orig / 10;
        digits++;
    }
    orig = num;
// we used this "orig = num;" twice here as 1st loop destroy the orig fro counting the digits
    while (orig != 0) 
    {
        remainder = orig % 10;
        result=result + pow(remainder, digits);
        orig=orig/10;
    }
   
    if ((int)result == num)   // we used type casting as without it can cause precision error as we are comparing doulbe result with int num
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}