class Solution {
public:
    int findGCD(vector<int>& nums) {
        int l=*min_element(nums.begin(),nums.end());
        int r=*max_element(nums.begin(),nums.end());
        return gcd(l,r);
    }
};