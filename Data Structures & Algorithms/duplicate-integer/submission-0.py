class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        # basic approach looping over all items 
        currVal = 0
        for i in range(len(nums)):
            currVal = nums[i]
            for j in range(i+1,len(nums)):
                if nums[j] == currVal:
                    return True
        return False