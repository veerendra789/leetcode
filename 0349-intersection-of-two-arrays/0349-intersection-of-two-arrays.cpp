class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> mp1;
        //map<int,int> mp2;
        for(int num:nums1){
            mp1[num]++;
        }
        vector<int> res;
        for(int i=0;i<nums2.size();i++){
            if(mp1.count(nums2[i])){
                res.push_back(nums2[i]);
            }
        }
        set<int> s(res.begin(),res.end());
        vector<int> fin(s.begin(),s.end());
        return fin;
    }
};