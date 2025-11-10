class Solution {
    public void moveZeroes(int[] nums) {
        int l=0,r=nums.length-1;
        for(int i=0;i<r+1;i++){
            if(nums[i]!=0){
                int temp=nums[i];
                nums[i]=nums[l];
                nums[l]=temp;
                l=l+1;

            }
        }
      //  return nums;
    }
}