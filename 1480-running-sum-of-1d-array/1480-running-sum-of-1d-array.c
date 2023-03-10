/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* runningSum(int* nums, int numsSize, int* returnSize){
    /**
    int sum = 0;
    *returnSize = numsSize; //size for the new array to be returned
    
    for(int i = 0 ; i < numsSize ; i++)
    {
       sum = sum + nums[i];
        nums[i] = sum;
    }
    return nums;
    */
    
    
    int* outputNums = (int*)malloc(sizeof(int)*numsSize);
    outputNums[0] = nums[0];
    
    for(int i = 1; i < numsSize; i++){
        outputNums[i] = outputNums[i-1] + nums[i];
    }
    
    *returnSize = numsSize;
    return outputNums;
}
