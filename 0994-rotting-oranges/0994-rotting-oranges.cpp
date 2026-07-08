class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int t=0;
        vector<vector<int>> visit(n,vector<int> (m,0));
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},t});
                    visit[i][j]=2;
                }
            }
        }
        int maxi=0;
        while(!q.empty()){
            int mrow=q.front().first.first;
            int mcol=q.front().first.second;
            int tm=q.front().second;
            maxi=max(maxi,tm);
            q.pop();
            int drow[]={-1,0,1,0};
            int dcol[]={0,1,0,-1};
            for(int i=0;i<4;i++){
                int nrow=mrow+drow[i];
                int ncol=mcol+dcol[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && visit[nrow][ncol]!=2 && grid[nrow][ncol]==1){
                    visit[nrow][ncol]=2;
                    q.push({{nrow,ncol},tm+1});
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(visit[i][j]==0 && grid[i][j]==1){
                    return -1;
                }
            }
        }
        return maxi;
    }
};