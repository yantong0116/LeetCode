class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: int
        """
        list1 = [0]*256
        result = 0
        check = 0
        for i in range(len(s)): 
            list1[ord(s[i])] += 1
        for i in range(len(list1)): 
            if list1[i] % 2 == 0: 
                result += list1[i]
            else: 
                check = 1
                result += (list1[i]-1)
        if check == 1: 
            result += 1
        return result