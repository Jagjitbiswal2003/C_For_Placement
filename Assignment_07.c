// WAP to print the table of a given number using loop.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int table;
    printf("Enter the number :\n");
    scanf("%d", &table);
      int result;
    if (table < 1)
    {
        printf("Invalid table!");
        exit(0);
    }
    for (int i = 1; i <= 10; i++)
    {
        result = table * i;
        printf("%d ",result);
    }
    return 0;
}