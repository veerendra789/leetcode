class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double d;
        int s=0;
        for(int i=0;i<k;i++){
            s+=nums[i];
        }
        int maxi=s;
        for(int i=k;i<nums.size();i++){
            s+=nums[i]-nums[i-k];
            maxi=max(maxi,s);
        }

        return (double)maxi/k;
    }
};