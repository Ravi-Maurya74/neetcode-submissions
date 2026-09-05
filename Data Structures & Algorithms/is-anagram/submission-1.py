class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s)!=len(t):
            return False
        m1, m2 = defaultdict(int), defaultdict(int)
        for char in s:
            m1[char]=m1[char]+1
        for char in t:
            m2[char]=m2[char]+1
        for k,v in m1.items():
            if m2[k]!=v:
                return False
        return True