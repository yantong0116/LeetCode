class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double temp = 0;
        
        for(int i = 0; i < k; i++) temp += nums[i];
        
        double result = temp / k;
        
        for(int i = 1; i <= nums.size() - k; i++){
            temp = temp - nums[i-1] + nums[i+k-1];
            result = max(result, temp / k);
        }

        return result;
    }
};


// class Solution {
// public:
//     double findMaxAverage(vector<int>& nums, int k) {
//         double sum = 0;

//         // Calculate the sum of the first 'k' elements
//         for (int i = 0; i < k; i++)
//             sum += nums[i];

//         double maxAverage = sum / k; // Initialize the maximum average

//         // Slide the window and calculate the maximum average
//         for (int i = k; i < nums.size(); i++) {
//             sum += nums[i] - nums[i - k]; // Add the next element and remove the first element of the window
//             maxAverage = max(maxAverage, sum / k); // Update the maximum average if necessary
//         }

//         return maxAverage;
//     }
// };

