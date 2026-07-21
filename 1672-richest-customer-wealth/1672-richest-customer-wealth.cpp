class Solution {
public:
    int maximumWealth(vector<vector<int>>& acc) {
        int n=acc.size();
        int maxi=0;
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=0;j<acc[i].size();j++){
                c+=acc[i][j];
            }
            maxi=max(maxi,c);
        }
        return maxi;
    }
};