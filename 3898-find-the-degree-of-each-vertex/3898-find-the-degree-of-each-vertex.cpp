class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& m) {
        vector<int> res;
        for(int i=0;i<m.size();i++){
            int c=0;
            for(int j=0;j<m.size();j++){
                if(m[i][j]==1){
                    c++;
                }
            }
            res.push_back(c);
        }
        return res;
    }
};