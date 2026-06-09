class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        counts = dict()
        maxVals = []

        for num in nums:
            counts[num] = counts.get(num,0) +1
        
        maxCount = 0
        maxNum = 0
        print(counts)

        for i in range(k):
            for key,v in counts.items():
                if v > maxCount:
                    maxNum = key
                    maxCount = v
                    print(maxNum)
            counts.pop(maxNum, None)
            maxVals.append(maxNum)
            maxCount = 0
            maxNum = 0
            print("Curr max being removed is: " + str(maxNum))
        return maxVals
                
            
            