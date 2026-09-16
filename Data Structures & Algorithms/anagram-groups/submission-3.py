class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        d = {}
        
        for word in strs:
            srted = "".join(sorted(word))
            if srted not in d:
                d[srted] = [word]
            else:
                d[srted].append(word)
        
        return list(d.values())