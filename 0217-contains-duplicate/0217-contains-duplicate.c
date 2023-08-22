void mergeSort(int *nums, int l, int r)
{
    if(l==r);
    else
    {
        int mid = (l+r)/2;
        mergeSort(nums, l, mid);
        mergeSort(nums, mid+1, r);
        int *temp = malloc((r-l+1)*sizeof(int));
        
        int a=l, b=mid+1, count=0;
        while(a<=mid && b<=r)
        {
            if(nums[a]<=nums[b])
            {
                temp[count++]=nums[a++];
            }
            else if(nums[a]>nums[b])
            {
                temp[count++]=nums[b++];
            }
        }
        while(a<=mid)temp[count++]=nums[a++];
        while(b<=r)temp[count++]=nums[b++];
        for(int i=0; i<count;i++)
        {
            nums[l+i]=temp[i];
        }
    }
}

bool containsDuplicate(int* nums, int numsSize)
{
    mergeSort(nums, 0, numsSize-1);
    for(int i=0; i<numsSize-1; i++)
    {
        if(nums[i]==nums[i+1])return true;
    }
    return false;
}