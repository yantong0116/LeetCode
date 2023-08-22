int cmpfunc (int* a, int* b)
{
   return (*a-*b);
}

bool containsDuplicate(int* nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(int), cmpfunc);//(第一個指針的位置，大小，每個元素大小，比較函數(固定寫法)
    for(int i = 0; i < numsSize - 1; i++){
        if(nums[i] == nums[i + 1]){
            return true;
        }
    }
    return false;
}