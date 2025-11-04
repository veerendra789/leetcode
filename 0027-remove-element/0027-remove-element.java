class Solution {
    public int removeElement(int[] nums, int val) {
        int c=0,b=0;
        int[] a=new int[nums.length];
        for(int i=0;i<nums.length;i++){
            if(nums[i]!=val){
                nums[b]=nums[i];
                b=b+1;
            }
        }
        return b;
    }
}