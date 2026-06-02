class Solution {
public:
    int singleNumber(vector<int>& nums) {
       map<int,int> mpp;
       for(int i=0;i<nums.size();i++){
        mpp[nums[i]]++;
       } 
       for(auto t:mpp){
        if(t.second==1){
            return t.first;
        }
       }
       return {};
    }
};