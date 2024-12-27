class Solution:
    def buildArray(self, nums: List[int]) -> List[int]:
        ans=[]
        for i in range(len(nums)):
            n=nums[nums[i]]
            ans.append(n)
        return ans