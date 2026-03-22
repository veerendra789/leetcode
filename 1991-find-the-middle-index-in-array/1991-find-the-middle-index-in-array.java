class Solution {
    public int findMiddleIndex(int[] nums) {
        int n=nums.length;
        int tsum=0;
        for(int num:nums){
            tsum=tsum+num;
        }
        int rsum=tsum,lsum=0;
        for(int i=0;i<n;i++){
            rsum=rsum-nums[i];
            if(rsum==lsum){
                return i;
            }
            lsum=lsum+nums[i];
        }
        return -1;
    }
}