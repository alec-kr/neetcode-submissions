class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        d = {}
        out = []
        for word in strs:
            srted = "".join(sorted(word))
            if srted not in d:
                d[srted] = [word]
            else:
                d[srted].append(word)
        for v in d.values():
            out.append(v)
        
        return out