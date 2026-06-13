class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int,int> mp;
        mp[0]=-1;
        int pre=0;
        int maxl=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                pre-=1;
            }
            else{
                pre+=1;
            }
            if(mp.count(pre)){
                maxl=max(maxl,i-mp[pre]);
            }
            else{
                mp[pre]=i;
            }
        }
        return maxl;
    }
};