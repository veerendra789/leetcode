class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> map;
        for(int i=0;i<n;i++){
            map[nums[i]]=i;
        }
        int c=0;
        for(int i=0;i<n;i++){
            c=target-nums[i];
            if(map.count(c) && map[c]!=i){
                return {i,map[c]};
            }
        }
        return{};
    }
};