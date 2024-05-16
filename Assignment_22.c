// Dynamic Memory Allocation

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, i;

    // Allocating memory using calloc
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    arr = (int *)calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed. Exiting.\n");
        return 1;
    }

    // Initializing the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Printing the array
    printf("The elements in the array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Reallocating memory using realloc
    printf("Enter the new size of the array: ");
    scanf("%d", &n);

    arr = (int *)realloc(arr, n * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed. Exiting.\n");
        return 1;
    }

    // Initializing the additional elements
    printf("Enter %d more elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Printing the array after reallocation
    printf("The elements in the array after reallocation are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Freeing the allocated memory
    free(arr);

    return 0;
}
