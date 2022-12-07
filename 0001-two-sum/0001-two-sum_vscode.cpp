#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); ++i) {
            int v = nums[i];
            int x = target - v;
            if (m.count(x)){
                return {m[x], i};
            }
            m[v] = i;
        }
        return {};
    }
};

int main(){
    Solution sol;
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> ans = sol.twoSum(nums, target);
    for(int num : ans){
		cout << num << " ";
	}
	return 0;
}
