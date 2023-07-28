bool canJump(int* nums, int numsSize) {
    int mx = 0;
    for (int i = 0; i < numsSize; ++i) {
        if (mx < i) {
            return false;
        }
        if (mx < i + nums[i]) {
            mx = i + nums[i];
        }
    }
    return true;
}