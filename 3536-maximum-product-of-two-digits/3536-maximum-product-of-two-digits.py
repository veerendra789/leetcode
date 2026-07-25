class Solution:
    def maxProduct(self, n: int) -> int:
        p = list(str(n))
        s = max(p)
        p.remove(s)
        h = max(p)
        return (int(s) * int(h))
