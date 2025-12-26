class Solution {
    public int findNumbers(int[] nums) {
        int t=0;
        for(int i=0;i<nums.length;i++){
            if(lengthnum(nums[i])%2==0){
                t=t+1;
            }
        }
        return t;
    }
    public int lengthnum(int n){
        int c=0;
        while(n>0){
            n=n/10;
            c=c+1;
        }
        return c;
    }
}