bool isSubsequence(char * s, char * t){
    int i = 0, j = 0;
    int m = strlen(s), n = strlen(t);
    
    while(i < m && j < n){
        if(s[i] == t[j]){
            i++;
        }
        j++;
    }
    return i == m;
}

