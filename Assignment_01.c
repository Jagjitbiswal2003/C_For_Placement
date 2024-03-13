// WAP  to find the maximum of  three numbers(If-else)

#include <stdio.h>


int main()
{
    int a, b, c;
    int result=0;
    printf("Enter three number for finding the max no:\n");
    scanf("%d %d %d", &a, &b, &c);
   
    if (a >= b)
    {
        if (a >= c)
            result = a;
        else
            result = c;
    }
    else
    {
        if (b >= c)
            result = b;
        else
            result = c;
    }
    printf("The max among three number is %d:",result);
    return 0;
}