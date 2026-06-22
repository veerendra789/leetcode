class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> res;
        map<int,int> mp;
        for(int num:nums){
            mp[num]++;
        }
        for(auto it:mp){
            if(it.second>1){
                res.push_back(it.first);
            }
        }
        return res;
    }
};