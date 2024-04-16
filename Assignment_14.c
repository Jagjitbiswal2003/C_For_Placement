// Linear search using  Recursion .
// Time complexity O(n) space complexity O(1).

#include <stdio.h>
#include <stdlib.h>
int linearSearch(int arr[], int size, int key, int index)
{
    // Base case: if the element is not found
    if (index >= size)
        return -1;

    // Base case: if the key is found
    if (arr[index] == key)
        return index;

    // Recursive case: search in the rest of the array
    return linearSearch(arr, size, key, index + 1);
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
    int result = linearSearch(arr, n, k,0);
    printf("The element fount at: %d", result);
    return 0;
}