// 2 sum problem

#include <stdio.h>

int twoSum(int* nums, int numsSize, int target) {
  int start = 0;
  int end = numsSize - 1;

  while (start < end) {
    int sum = nums[start] + nums[end];

    if (sum == target) {
      return 1; // Found the pair
    } else if (sum < target) {
      start++; // Move start pointer to the right (increase)
    } else {
      end--; // Move end pointer to the left (decrease)
    }
  }

  return 0; // No pair found
}

int main() {
  int nums[] = {2, 7, 11, 15};
  int target = 9;
  int numsSize = sizeof(nums) / sizeof(nums[0]);

  if (twoSum(nums, numsSize, target)) {
    printf("Found a pair that sums to %d\n", target);
  } else {
    printf("No pair found that sums to %d\n", target);
  }

  return 0;
}
