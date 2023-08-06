/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int carry = 1; // 初始carry為1，因為要加1
    int* result = (int*)malloc((digitsSize + 1) * sizeof(int)); // 預設多一位數，以防有進位
    int resultIndex = digitsSize; // 結果陣列的索引

    for (int i = digitsSize - 1; i >= 0; i--) {
        int sum = digits[i] + carry;
        result[resultIndex] = sum % 10; // 當前位的數字
        carry = sum / 10; // 計算進位
        resultIndex--;
    }

    // 檢查最後是否有進位，如果有，則將進位carry加到結果的最高位
    if (carry) {
        result[0] = carry;
        *returnSize = digitsSize + 1;
    } else {
        *returnSize = digitsSize;
        // 因為多預設了一位數，所以要將結果向右位移一格，讓最高位為0
        for (int i = 0; i < digitsSize; i++) {
            result[i] = result[i + 1];
        }
    }

    return result;
}
