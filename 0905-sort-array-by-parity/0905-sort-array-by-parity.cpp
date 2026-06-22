class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> odd;
        vector<int> even;
        for(int num:nums){
            if(num%2==1){
                odd.push_back(num);
            }
            else{
                even.push_back(num);
            }
        }
       // vector<int> res;
        for(int num:odd){
            even.push_back(num);
        }
        return even;
    }
};