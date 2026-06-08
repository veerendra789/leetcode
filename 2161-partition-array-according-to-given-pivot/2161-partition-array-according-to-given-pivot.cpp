class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int> less;
        vector<int> right;
        vector<int> piv;
        for(int i=0;i<n;i++){
            if(nums[i]<pivot) less.push_back(nums[i]);
            else if(nums[i]>pivot) right.push_back(nums[i]);
            else piv.push_back(nums[i]);
        }
        less.insert(less.end(),piv.begin(),piv.end());
        less.insert(less.end(),right.begin(),right.end());
        return less;
    }
};