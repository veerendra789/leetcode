class Solution {
public:
    int sun(int n){
        int c=0;
        while(n!=0){
            int d=n%10;
            c+=d;
            n=n/10;
        }
        return c;
    }
    int minElement(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]=sun(nums[i]);
        }
        return *min_element(nums.begin(),nums.end());
    }
};