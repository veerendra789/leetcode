class Solution {
    public int maxProduct(int[] nums) {
        int m=0,l=0,k=0;
        for(int i=0;i<nums.length;i++)
        {
            for(int j=0;j<nums.length;j++){
                if((nums[i]*nums[j]>m)&&(i!=j)){
                    m=nums[i]*nums[j];
                    l=nums[i];
                    k=nums[j];
                }
            }
        }
        return (l-1)*(k-1);
    }
}