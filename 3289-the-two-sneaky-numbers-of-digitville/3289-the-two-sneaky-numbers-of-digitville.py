class Solution:
    def getSneakyNumbers(self, nums: List[int]) -> List[int]:
        ump = {}
        ans = []
        for i in nums:
            ump[i] = ump.get(i,0)+1
            if ump[i]==2:
                ans.append(i)
        return ans