class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int tot=0;
        for(int num:nums){
            tot+=num;
        }
        int left=0,right=tot;
        int c=0;
        for(int i=0;i<nums.size()-1;i++){
            left+=nums[i];
            right-=nums[i];
            int diff=abs(left-right);
            if(diff%2==0){
                c++;
            }
        }
        return c;
    }
};