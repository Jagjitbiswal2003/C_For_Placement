// Check whether the  number is Amstrong or not using loop and function.
// n-is the no of digits in a number    ex- 1234  n=4 no of digits

#include <stdio.h>
#include <math.h>

int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number = number/10;
        count++;
    }
    return count;
}

int is_armstrong(int number) {
    int n = countDigits(number);
    int remainder;int sum = 0; int original = number;

    if (number <= 0) {
        printf("The given number is not valid\n");
        return 0; // Indicate failure using a return value
    }

    while (number > 0) {
        remainder = number % 10;
        sum = sum+ pow(remainder, n); // Use += for concise addition
        number = number/10;
    }

    if (original == sum) {
        return 1; // Indicate success
    } else {
        return 0;
    }
}

int main() {
    int number;
    printf("Enter a number to check whether it is an Armstrong number or not:\n");
    scanf("%d", &number);

    if (is_armstrong(number)) {
        printf("%d is an Armstrong number\n", number);
    } else {
        printf("%d is not an Armstrong number\n", number);
    }

    return 0;
}
