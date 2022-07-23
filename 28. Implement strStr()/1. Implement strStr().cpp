class Solution {
public:
    int strStr(string haystack, string needle) {
        int hay_len = haystack.size();
        int nee_len = needle.size();
        
        if(!nee_len)
            return 0;
        
        for(int i = 0 ; i < hay_len ; i++){
            if(haystack[i] == needle[0]){
                int j = 0;
                for( ; j < nee_len ; j++){
                    if(haystack[i + j] != needle[j])
                        break ;
                }
                if(j == nee_len)
                    return i ;
            }
        }
        return -1;
    }
};