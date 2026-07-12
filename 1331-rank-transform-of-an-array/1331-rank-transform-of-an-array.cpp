class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int> s;
        for(int num: arr){
            s.insert(num);
        }
        map<int,int> mp;
        int rank = 1;
        for (int x : s) {
            mp[x] = rank++;
        }
        vector<int> res(arr.size());
        for(int i=0;i<arr.size();i++){
            res[i]=mp[arr[i]];
        }
        return res;
    }
};