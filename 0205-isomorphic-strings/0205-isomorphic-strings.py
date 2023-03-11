class Solution(object):
    def isIsomorphic(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        s_dict = {}
        t_dict = {}
        
        for i in range(len(s)):
            if s[i] in s_dict and s_dict[s[i]] != t_dict.get(t[i]):
                return False
            if t[i] in t_dict and t_dict[t[i]] != s_dict.get(s[i]):
                return False
            s_dict[s[i]] = i
            t_dict[t[i]] = i
            
        return True
