class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
       map<int,int> mp;
       for(int num:nums){
        mp[num]++;
       }
       priority_queue<int> q;
       for(auto it:mp){
        q.push(it.first);
       }
       vector<int> res;
       int i=0;
       while(!q.empty() && i!=k){
        res.push_back(q.top());
        q.pop();
        i++;
       }
       return res;
    }
};