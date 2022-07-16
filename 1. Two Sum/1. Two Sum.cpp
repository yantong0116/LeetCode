class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        for(int i = 0 ; i < (len - 1) ; i++){
            for(int j = i + 1 ; j < len ; j++){
                if(target == nums[i] + nums[j]){
                    return {i, j};
                }
            }
        }
        return {};
    }
};