int romanToInt(char *s) {
    char numerals[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int values[] = {1, 5, 10, 50, 100, 500, 1000};
    int nums[128] = {0}; 

    // Populate the nums array with the integer values.
    for (int i = 0; i < sizeof(numerals) / sizeof(numerals[0]); ++i) {
        nums[numerals[i]] = values[i];
    }

    int ans = nums[s[strlen(s) - 1]];
    for (int i = 0; i < strlen(s) - 1; ++i) {
        int sign = nums[s[i]] < nums[s[i + 1]] ? -1 : 1;
        ans += sign * nums[s[i]];
    }
    return ans;
}