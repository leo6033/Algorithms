class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        lenth = len(s)
        tmp = ''
        result = 0
        for i in range(lenth):
            flag = tmp.find(s[i])
            tmp += s[i]
            if flag != -1:
                result = max(len(tmp) - 1, result)
                tmp = tmp[flag + 1:]
        result = max(len(tmp), result)
        return result