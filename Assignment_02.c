// WAP to check whether a person is eligible for vote or not.

#include <stdio.h>


int main()
{
    int age;
    printf("Enter the age here:\n");
    scanf("%d", &age);
    if (age <= 0)
    {
        printf("Age canot be negative or zero");
        exit(0);
    }
    if (age >= 18)
        printf("The person is eligible for voting with a age of:%d", age);
    else
        printf("The person is not eligible for voting with a age of:%d", age);

    return 0;
}