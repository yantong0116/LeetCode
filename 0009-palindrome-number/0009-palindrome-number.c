bool isPalindrome(int x) {
    // int 的範圍通常是在 -2,147,483,648 到 2,147,483,647 之間
    // Sufficient space to store an int as a string
    char str[12]; 
    snprintf(str, sizeof(str), "%d", x);
    int length = strlen(str);

    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            return false;
        }
    }
    return true;
}

// bool isPalindrome(int x) {
//     if (x < 0 || (x != 0 && x % 10 == 0)) {
//         return false;
//     }

//     int y = 0;
//     while (x > y) {
//         y = y * 10 + x % 10;
//         x /= 10;
//     }

//     return x == y || x == y / 10;
// }
