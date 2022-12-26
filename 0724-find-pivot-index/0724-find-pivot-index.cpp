class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int i, sum = 0, lsum = 0, rsum = 0;
        sum = accumulate(nums.begin(), nums.end(), 0);
        int n = nums.size();
        rsum = sum;
        for(i = 0; i < n; i++){
            rsum = rsum - nums[i];
            if(lsum == rsum){
                return i;
            }
            lsum = lsum + nums[i];
        }
        return -1;
    }
};