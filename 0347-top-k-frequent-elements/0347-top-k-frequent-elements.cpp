class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int num:nums){
            mp[num]++;
        }
        priority_queue<pair<int,int>> q;
        for(auto it:mp){
            q.push({it.second,it.first});
        }
        vector<int> res(k,0);
        for(int i=0;i<k;i++){
            res[i]=q.top().second;
            q.pop();
        }
        return res;
    }
};