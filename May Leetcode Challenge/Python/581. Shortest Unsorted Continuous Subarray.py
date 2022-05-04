class Solution:
    def findUnsortedSubarray(self, nums: List[int]) -> int:
        n = len(nums)
        first = nums[0]
        last = nums[-1]
        start = 0
        end = 0
        for i in range(1,n):
            if nums[i]<first:
                end = i
            else:
                first = nums[i]
            if last<nums[~i]:
                start = ~i
            else:
                last = nums[~i]
        # print(first, end)
        if end!=0:
            return end - (n+start) + 1
        return 0