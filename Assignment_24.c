// Union in C
#include <stdio.h>

// Define a union named "Number"
union Number {
    int intValue;
    float floatValue;
};

int main() {
    // Declare a variable of type "Number"
    union Number num;

    // Initialize the values of the union members
    printf("Enter an integer value: ");
    scanf("%d", &num.intValue);

    // Display the integer value
    printf("Integer value: %d\n", num.intValue);

    // Change the type of value stored in the union
    printf("Enter a floating-point value: ");
    scanf("%f", &num.floatValue);

    // Display the floating-point value
    printf("Float value: %.2f\n", num.floatValue);

    // Display the integer value again, now it may have changed due to union behavior
    printf("Integer value after changing to float: %d\n", num.intValue);

    return 0;
}
