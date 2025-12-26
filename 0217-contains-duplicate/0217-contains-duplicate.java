class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashSet<Integer> has1=new HashSet<>();
        for(int i=0;i<nums.length;i++){
            if(has1.contains(nums[i])){
                return true;
            }
            has1.add(nums[i]);
        }
        return false;
    }
}