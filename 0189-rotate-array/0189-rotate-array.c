void rotate(int* nums, int numsSize, int k) {
    k %= numsSize;
    reverseArray(nums, 0, numsSize - 1);
    reverseArray(nums, 0, k - 1);
    reverseArray(nums, k, numsSize - 1);
}

void reverseArray(int *arr, int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
