class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        tmp = 0
        for i in nums:
            tmp = tmp ^ i
        return tmp