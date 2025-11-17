#include <stdio.h>

int main() {
    int nums[100];
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int insertPos = 0;
    for (i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[insertPos] = nums[i];
            insertPos++;
        }
    }
    while (insertPos < n) {
        nums[insertPos] = 0;
        insertPos++;
    }
    printf("[");
    for (i= 0; i < n; i++) {
        printf("%d", nums[i]);
        if (i < n - 1) printf(",");
    }
    printf("]");
    return 0;
}
