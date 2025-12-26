class Solution {
    public int missingNumber(int[] nums) {
        int n,sum,c=0;
        n=nums.length;
        sum=(n*(n+1))/2;
        for(int i=0;i<n;i++){
          c=c+nums[i];
        }
        return sum-c;

        
    }
}