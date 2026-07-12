class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        long long s=0,mod=1000000007;
        for(int num:nums){
            s+=num;
        }
        long long x=(s+k-1)/k%mod;
        return(x-1)*x/2%mod;
    }
};