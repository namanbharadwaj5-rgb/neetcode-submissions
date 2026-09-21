class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        n=len(nums)
        ans=[0]*(2*n)
        x=0
        for i in range(2*n):
            ans[x] = nums[i%n]
            x+=1
        return ans



