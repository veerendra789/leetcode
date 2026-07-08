class Solution {
private:
    int bfs(int row,int col,vector<vector<int>> &visit,vector<vector<int>>& grid){
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>> q;
        q.push({row,col});
        visit[row][col]=1;
        int res=0;
        while(!q.empty()){
            int mrow=q.front().first;
            int mcol=q.front().second;
            q.pop();
            int drow[]={-1,0,1,0};
            int dcol[]={0,1,0,-1};
            for(int i=0;i<4;i++){
                int nrow=mrow+drow[i];
                int ncol=mcol+dcol[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !visit[nrow][ncol] && grid[nrow][ncol]==1){
                    visit[nrow][ncol]=1;
                    res+=grid[nrow][ncol];
                    q.push({nrow,ncol});
                }
            }
        }
        return res;
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int maxi=0;
        vector<vector<int>> visit(n,vector<int> (m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visit[i][j] && grid[i][j]==1){
                    int area=bfs(i,j,visit,grid)+1;
                    maxi=max(maxi,area);
                }
            }
        }
        return maxi;
    }
};