class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
           // cout<<mp.first<<" "<<mp.second<<endl;
        }
        int c=0;
        for(auto it:mp){
            cout<<it.first<<" "<<it.second<<endl;
            if(it.second>mp[c]){
                c=it.first;
            }
        }
        return c;
    }
};