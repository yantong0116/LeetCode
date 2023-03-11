int longestPalindrome(char * s){
    int list1[128] = {};
    
    int oddcheck = 0;
    int result = 0;
    for(int i = 0; i < strlen(s); i++){
        list1[s[i]]++;
    }
    for(int i = 0; i < 128; i++){
        result += list1[i];
        if(list1[i] % 2 != 0){
            oddcheck += 1;
        }
    }
    if(oddcheck > 0){
        result = result - oddcheck + 1;
    }
    return result;
}