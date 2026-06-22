class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;
        vector<int> res;
        for(int num:nums){
            if(num%2==0){
                even.push_back(num);
            }
            else{
                odd.push_back(num);
            }
        }
        int i=0,j=0;
        while(i!=even.size() && j!=odd.size()){
            res.push_back(even[i]);
            res.push_back(odd[i]);
            i++;
            j++;
        }
        return res;
    }
};