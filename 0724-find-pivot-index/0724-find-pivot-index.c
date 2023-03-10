int pivotIndex(int* nums, int numsSize){
    
    /**
    for(int i=0; i<numsSize; i++){
        int leftSum = 0;
        int rightSum = 0;
        for(int j=0; j<i; j++){
            leftSum += nums[j];
        }
        for(int k=i+1; k<numsSize; k++){
            rightSum += nums[k];
        }
        if(leftSum == rightSum){
            return i;
        }
    }
    return -1;
    */
    
    int leftSum = 0;
    int rightSum = 0;
    for (int i = 0; i < numsSize; i++) {
        rightSum += nums[i];
    }
    for (int i = 0; i < numsSize; i++) {
        rightSum -= nums[i];
        if (leftSum == rightSum) {
            return i;
        }
        leftSum += nums[i];
    }
    return -1;
}
