class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mpp;
        for(int i=0;i<strs.size();i++){
            string res=strs[i];
            sort(strs[i].begin(),strs[i].end());
            mpp[strs[i]].push_back(res);

        }
        vector<vector<string>> fin;
        for(auto it:mpp){
            fin.push_back(it.second);
        }
        return fin;
    }
};
