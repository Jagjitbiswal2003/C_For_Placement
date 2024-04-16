// Linear search using Loop.
// Time complexity O(n) space complexity O(1).

#include <stdio.h>
#include <stdlib.h>
int Linear_search(int arr[], int n, int target)
{

    if (n == 0)
    {
        exit(0);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
            break;
        }
    }
}
int main()
{
    int n;
    int k;
    printf("Enter the length of array:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the the array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the element you want to find:\n");
    scanf("%d", &k);
    int result = Linear_search(arr, n, k);
    printf("The element fount at: %d", result);
    return 0;
}