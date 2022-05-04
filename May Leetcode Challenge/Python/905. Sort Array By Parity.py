class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        i = 0
        j = len(nums)-1
        while i<j:
            if nums[i]%2!=0:
                while j>i:
                    if nums[j]%2==0:
                        nums[i], nums[j] = nums[j], nums[i]
                        break
                    else:
                        j-=1
            i+=1
        return nums