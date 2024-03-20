// WAP to calculate the factorial of a number using function and loop.
#include <stdio.h>

int calc_factorial(int num)
{
    int factorial = 1;
    for (int i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}
int main()
{
    int num;
    printf("Enter the number for calculating factorial:\n");
    scanf("%d", &num);
    printf("The factorial of given number is:%d", calc_factorial(num));
    return 0;
}