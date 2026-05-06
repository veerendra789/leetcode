class Solution:
    def hammingWeight(self, n: int) -> int:
        s=""
        while(n>0):
            d=n%2
            s+=str(d)
            n=n//2
        return s.count('1')
