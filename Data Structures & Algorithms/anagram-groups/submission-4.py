class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        d = {}

        for word in strs:
            # sort letters in each word alphabetically (to be used as key)
            srted = "".join(sorted(word))
            if srted not in d:
                # add word to key if not exists
                d[srted] = [word]
            else:
                d[srted].append(word)
        # convert values array to Python list
        return list(d.values())