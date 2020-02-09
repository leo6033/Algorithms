class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        index = []
        i = 0
        j = len(nums) - 1
        cnums = sorted(nums.copy())
        result = cnums[i] + cnums[j]
        while result != target:
            if result > target:
                j -= 1
            else:
                i += 1
            result = cnums[i] + cnums[j]
        index.append(nums.index(cnums[i]))
        nums[index[0]] = cnums[j] + 1
        index.append(nums.index(cnums[j]))
        index = sorted(index)
        return index