#include <stdio.h>

int main()
{
    int num1, num2, result = 0;
    char operation;

    printf("Enter two numbers for performing operations:\n");
    scanf("%d %d", &num1, &num2);

    // Clear input buffer
    getchar();

    printf("Enter the Operation:\n");
    scanf("%c", &operation);

    switch (operation)
    {
    case '+':
        result = num1 + num2;
        printf("The addition of two numbers is %d\n", result);
        break;
    case '-':
        result = num1 - num2;
        printf("The subtraction of two numbers is %d\n", result);
        break;
    case '*':
        result = num1 * num2;
        printf("The multiplication of two numbers is %d\n", result);
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("The division of two numbers is %d\n", result);
        }
        else
        {
            printf("Error: Division by zero\n");
        }
        break;
       
        default:
        printf("Please insert a valid operation\n");
        break;
    }

    return 0;
}
