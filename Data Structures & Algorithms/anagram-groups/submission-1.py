class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        d = {}
        out = []
        for i in range(len(strs)):
            srted = "".join(sorted(strs[i]))
            if srted not in d:
                d[srted] = [strs[i]]
            else:
                d[srted].append(strs[i])
        for v in d.values():
            out.append(v)
        
        return out