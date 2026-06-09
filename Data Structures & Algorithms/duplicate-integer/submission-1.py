class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        # basic approach looping over all items 
        valSet = set()

        for i in nums:
            if i in valSet:
                return True
            valSet.add(i)
        return False