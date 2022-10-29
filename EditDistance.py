class Solution:
    def minDistance(self, word1: str, word2: str) -> int:

        n = len(word1)
        m = len(word2)

        @cache
        def mdistance(i, j):

            if i == n or j == m:
                return (m - j) + (n - i) #if i is n, we will need m-j insert operations

            operations = min(
                mdistance(i + 1, j) + 1, #deletion
                mdistance(i, j + 1) + 1, # insertion
                mdistance(i + 1, j + 1) + (0 if word1[i] == word2[j] else 1), # if char is not same replace
            )
            return operations

        return mdistance(0, 0)
