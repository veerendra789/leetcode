class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mini=nums[0];
        int maxi=nums[nums.size()-1];

        int res = (nums.size() > 2) ? nums[1] : -1;
        return res;
    }

};