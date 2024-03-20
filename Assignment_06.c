// WAP to check whether a number is prime or not using loop and function.
#include <stdio.h>
#include <stdbool.h> //with help of this library you can use bool data type in c otherwise bydefault you canot use bool data type in c.
#include <stdlib.h>  //without this library you canot use exit(0).
int is_prime(int num)
{
    bool flag = false;

    if (num < 0)
    {
        printf("Use a valid number!");
        exit(0);
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = true;
            break;
        }
        else
            flag = false;
    }
    return flag;
}
int main()
{
    int num;
    printf("Enter the number :\n");
    scanf("%d", &num);
    if (is_prime(num) == true)
        printf("The number is not prime");
    else
        printf("The number is prime");
    return 0;
}