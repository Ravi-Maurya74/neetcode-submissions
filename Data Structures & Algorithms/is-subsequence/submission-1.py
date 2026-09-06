class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        l = 0
        for char in t:
            if l<len(s) and s[l]==char:
                l=l+1
        if l==len(s):
            return True
        return False