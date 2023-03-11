class Solution(object):
    def isIsomorphic(self, s, t):
        # Dictionary to house pairs:
        pairs = {}

        # Begin comparing chars:
        for i in range(0, len(s)):
            # Check if the pair has been included as a val.
            if s[i] not in pairs and t[i] not in pairs.values():
                pairs.update({s[i]: t[i]})
            elif s[i] in pairs and t[i] == pairs.get(s[i]):
                pass
            else:
                return False
        return True