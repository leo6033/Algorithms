class Solution:
    def superEggDrop(self, K: int, N: int) -> int:
        dp = [0 for j in range(K + 1)]
        m = 0
        while dp[K] < N:
            m += 1
            i = K
            while i > 0:
                dp[i] = dp[i] + dp[i-1] + 1
                i -= 1
        return m