class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        _dict = {}
        length = len(nums) / 2
        for i in nums:
            try:
                _dict[i] += 1
            except:
                _dict[i] = 1
        for i in _dict:
            if _dict[i] >= length:
                return i

