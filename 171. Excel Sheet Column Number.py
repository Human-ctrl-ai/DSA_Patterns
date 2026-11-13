class Solution:
    def titleToNumber(self, ct: str) -> int:
        ans = 0
        for i, char in enumerate(ct):
            n = ord(char) - 64
            ans += n * (26 ** (len(ct) - (i + 1)))
        return ans