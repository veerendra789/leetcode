class Solution:
    def minElement(self, nums: List[int]) -> int:
        
        def fun(a):
            su = 0 
            while a > 0:
                r = a % 10
                su = su + r
                a = a // 10
            
            return su

        res = []
        for i in range(len(nums)):
            res.append(fun(nums[i]))
        print(res)
        return min(res)