class Solution {
public:
    double average(vector<int>& salary) {
        double res;
        int length = salary.size();
        int sum = 0;
        sort(salary.begin(), salary.end());
        
        for(int i = 1 ; i < salary.size() - 1 ; i++){
            sum += salary[i];
        }
        res = double(sum) / double(salary.size() - 2);
        
        return res;
    }
};