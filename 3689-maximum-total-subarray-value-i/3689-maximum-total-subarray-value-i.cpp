class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int ma=INT_MIN,mi=INT_MAX;
        for(int i:nums){
            ma=max(ma,i);
            mi=min(mi,i);
        }
        //long long n=k*(ma-mi);
        return 1LL*k*(ma-mi);
    }
};