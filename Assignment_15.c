// Sort 0s and 1s and 2s

#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void dutch_national_flag(int arr[], int n) {
  int low = 0;
  int mid = 0;
  int high = n - 1;

  while (mid <= high) {
    switch (arr[mid]) {
      case 0:
        swap(&arr[low], &arr[mid]);
        low++;
        mid++;
        break;
      case 1:
        mid++;
        break;
      case 2:
        swap(&arr[mid], &arr[high]);
        high--;
        break;
    }
  }
}

int main() {
  int arr[] = {1, 0, 2, 1, 0};
  int n = sizeof(arr) / sizeof(arr[0]);

  printf("Before sorting: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  dutch_national_flag(arr, n);

  printf("After sorting: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
