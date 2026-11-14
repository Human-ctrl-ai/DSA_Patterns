class Solution:
    def countPrimes(self, n: int) -> int:
        if(n <= 2): return 0
        else:
            l = [False] * n
            ans = n - 2
            i = 2
            while(i*i < n):
                if(l[i] == False):
                    for j in range(i*i, n, i):
                        if(l[j] == False):
                            l[j] = True
                            ans -= 1
                i += 1
            return ans
