class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        for(int i=0;i<n;i++){
            int maxi=max(0,i-nums[i]);
            for(int j=maxi;j<=i;j++){
                s+=nums[j];
            }
        }
        return s;
    }
};