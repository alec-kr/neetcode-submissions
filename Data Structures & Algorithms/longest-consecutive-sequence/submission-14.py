class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        nums.sort()
        longest_seq = 0
        curr_seq = 1

        if len(nums) == 0:
            return 0

        for j in range(len(nums)-1):
            if curr_seq > longest_seq and curr_seq != 0:
                longest_seq = curr_seq

            if nums[j+1] - nums[j] == 1:
                curr_seq += 1
            else:
                if nums[j+1] == nums[j]:
                    continue
                curr_seq = 1
            
        longest_seq = curr_seq if curr_seq > longest_seq else longest_seq

        return(longest_seq)