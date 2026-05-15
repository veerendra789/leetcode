class Solution {
    public int findMin(int[] nums) {
        int n=nums.length-1;
        int l=0,r=n;
        while(l<r){
            int mid=(l+r)/2;
            if(nums[mid]<nums[r]){
                r=mid;
            }
            else{
                l=mid+1;
            }
        }
        return nums[l];
    }
}