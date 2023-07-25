int removeDuplicates(int* nums, int numsSize){
    int count = 0;
    for(int i = 1; i < numsSize; i++){
        if(nums[count] != nums[i]){
            count++;
            nums[count] = nums[i];
        }
    }
    return count+1;
}