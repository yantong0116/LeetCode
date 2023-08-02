class Solution(object):
    def mergeAlternately(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: str
        """
        result = ""
        check = min(len(word1), len(word2))
        
        for i in range(check): 
            result += word1[i]
            result += word2[i]
        
        if len(word1) > check: 
            result += word1[i+1:]
        elif len(word2) > check: 
            result += word2[i+1:]
        
        return result