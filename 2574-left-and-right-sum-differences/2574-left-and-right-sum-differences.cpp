class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
       int n=nums.size();
       int s=0;
       for(int i=0;i<n;i++){
        s+=nums[i];
       }
       int l=0;
       vector<int> res;
       for(int i=0;i<n;i++){
        s-=nums[i];
        res.push_back(abs(l-s));
        //s-=l;
        l+=nums[i];
       }
       return res;
    }
};