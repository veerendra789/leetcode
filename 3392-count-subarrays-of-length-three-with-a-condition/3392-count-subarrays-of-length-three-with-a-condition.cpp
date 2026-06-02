class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int n=nums.size();
        int d=0;
        for(int i=1;i<n-1;i++){
            if(cou(nums[i-1],nums[i],nums[i+1])){
                d+=1;
            }
        }
        return d;
    }
    bool cou(int a,int b,int c){
        if(2*(a+c)==b){
            return true;
        }
        return false;
    }
};