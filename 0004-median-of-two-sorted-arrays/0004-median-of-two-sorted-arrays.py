class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        merge=sorted(nums1+nums2)
        n=len(merge)
        if(n%2==0):
            return (merge[(n//2)-1]+merge[n//2])/2
        else:
            return merge[n//2]