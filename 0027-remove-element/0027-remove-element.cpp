class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == val){
                nums[i] = nums[nums.size()-count-1];
                nums[nums.size()-count-1] = '_';
                count++;
                i--;
            }
        }
        int result = nums.size() - count;
        return result;
    }
};