class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> mp;
        mp[0]=1;
        int c=0;
        //int pre=nums[0];
        int pre = 0;
        for(int i=0;i<nums.size();i++){
            pre+=nums[i];
            int x = pre - k;
            if(mp[x] > 0){
                c += mp[x];
            }
            mp[pre]++;
           
        }
        return c;
    }
};