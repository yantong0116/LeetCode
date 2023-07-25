int removeDuplicates(int* nums, int numsSize){
    int count = 2;
        
    if(numsSize < 2){
        return numsSize;
    }else{

        for(int i = 2; i < numsSize; i++){
            if(nums[count-2] != nums[i]){
                nums[count] = nums[i];
                count++;
            }
        }
    }
    return count;
}