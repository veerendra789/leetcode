class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int,int> mp;
        vector<int> c;
        for(int num:nums){
            mp[num]++;
        }
        for(auto it: mp){
            if(it.second>1){
                c.push_back(it.first);
            }
        }
        return c;
    }
};