class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n=mat.size(),m=mat[0].size();
        priority_queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=0;j<m;j++){
                if(mat[i][j]==1){
                    c++;
                }
            }
            q.push({c,i});
        }
        vector<int> prior;
        while(!q.empty()){
            prior.push_back(q.top().second);
            q.pop();
        }
        reverse(prior.begin(),prior.end());
        vector<int> res;
        for(int i=0;i<k;i++){
            res.push_back(prior[i]);
        }
        return res;
    }
};