class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> list1(128);
        int check = 0;
        int result = 0;
        for(char c : s) list1[c]++;
        
        for(int i : list1){
            if(i % 2 == 0) result += i;
            else{
                check = 1;
                result += (i - 1);
            }
        }
        if(check == 1) result += 1;
        return result;
    }
};