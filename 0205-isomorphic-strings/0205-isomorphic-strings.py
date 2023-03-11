class Solution(object):
    def isIsomorphic(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        s2t = dict()
        t2s = dict()
        for i in range(len(s)):
            if s[i] not in s2t:
                if t[i] not in t2s:
                    s2t[s[i]] = t[i]
                    t2s[t[i]] = s[i]
                else:
                    return False
            elif s2t[s[i]] != t[i]:
                return False
        
        return True