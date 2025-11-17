#include <stdio.h>
void sortArray(int* nums, int n) {
	int i,j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
}
int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0)
        return 0;
    int k = 1;
   int i;
    for (i = 1; i < numsSize; i++) {
        if (nums[i] != nums[i - 1]) {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid size.\n");
        return 0;
    }
    int nums[n];
    printf("Enter %d integers: ", n);
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    sortArray(nums, n);
    int k = removeDuplicates(nums, n);
    printf("\n%d, nums = [", k);
    for (i = 0; i < k; i++) {
        printf("%d", nums[i]);
        if (i != n - 1) printf(",");
    }
    for ( i = k; i < n; i++) {
        printf("_,");
    }

    printf("]\n");

    return 0;
}
