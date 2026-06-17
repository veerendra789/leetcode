class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int> res;
        map<int,int> mpp;
        for(int num:bulbs){
            mpp[num]++;
        }
        for(auto it:mpp){
            if(it.second%2==1){
                res.push_back(it.first);
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};