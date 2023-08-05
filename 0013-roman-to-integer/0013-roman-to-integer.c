int romanToInt(char* s) {
    int romanValues[26]; // Create a HashMap to store the values of each Roman symbol
    romanValues['I' - 'A'] = 1;
    romanValues['V' - 'A'] = 5;
    romanValues['X' - 'A'] = 10;
    romanValues['L' - 'A'] = 50;
    romanValues['C' - 'A'] = 100;
    romanValues['D' - 'A'] = 500;
    romanValues['M' - 'A'] = 1000;

    int len = strlen(s);
    int result = romanValues[s[len - 1] - 'A']; // Initialize result with the value of the last symbol

    for (int i = len - 2; i >= 0; i--) {
        // If the value of the current symbol is less than the value of the next symbol,
        // we need to subtract it from the result. Otherwise, we add it to the result.
        if (romanValues[s[i] - 'A'] < romanValues[s[i + 1] - 'A']) {
            result -= romanValues[s[i] - 'A'];
        } else {
            result += romanValues[s[i] - 'A'];
        }
    }

    return result;
}