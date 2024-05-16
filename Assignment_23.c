// Structure in C

#include <stdio.h>

// Define a structure named "Person"
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Declare a variable of type "Person"
    struct Person person1;

    // Initialize the values of the structure members
    printf("Enter name: ");
    scanf("%s", person1.name);
    printf("Enter age: ");
    scanf("%d", &person1.age);
    printf("Enter height: ");
    scanf("%f", &person1.height);

    // Display the details of the person
    printf("Details of person:\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f\n", person1.height);

    return 0;
}
