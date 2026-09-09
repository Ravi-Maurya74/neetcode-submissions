class Solution:
    def appendCharacters(self, s: str, t: str) -> int:
        ind = 0
        for char in s:
            if ind<len(t) and t[ind]==char:
                ind=ind+1
        return len(t)-ind