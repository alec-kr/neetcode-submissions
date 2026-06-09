class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
            
        letterCountS = dict()
        letterCountT = dict()

        for c in s:
            if c not in letterCountS:
                letterCountS[c] = 1
            else:
                letterCountS[c] += 1
        
        for c in t:
            if c not in letterCountT:
                letterCountT[c] = 1
            else:
                letterCountT[c] += 1

        return letterCountS == letterCountT