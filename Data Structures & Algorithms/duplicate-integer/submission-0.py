class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        HM=dict()
        n=len(nums)
        for i in range(n):
            if nums[i] in HM:
               return True
            HM[nums[i]]=i

        return False