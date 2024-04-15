// Binary search using loop and the array must be in assending order.
//Time complexity O(logn) space complexity O(1).

#include <stdio.h>
#include <stdlib.h>
int binary_search(int arr[], int n, int target)
{

    if (n == 0)
    {
        printf("Give a valid length!");
        exit(0);
    }

    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
            return mid;

        else if (arr[mid] < target)
            low = mid + 1;

        else
            high = mid - 1;
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
    int result = binary_search(arr, n, k);
    printf("The element fount at: %d", result);
    return 0;
}