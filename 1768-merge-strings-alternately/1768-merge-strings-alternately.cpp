class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";
        int check = min(word1.size(), word2.size());
        int i;
        
        for (i = 0; i <= (check-1); i++){
            result += word1[i];
            result += word2[i];
        }
        
        if (word1.size() > check){
            for (i; word1[i] != '\0'; i++){
                result += word1[i];
            }
        }
        else if (word2.size() > check){ 
            for (i; word2[i] != '\0'; i++){
                result += word2[i];
            }
        }
        
        return result;
    }
};