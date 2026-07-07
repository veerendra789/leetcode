class Solution {
private:
    int bfs(int row,int col,vector<vector<int>> &visit,vector<vector<int>>& grid){
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>> q;
        visit[row][col]=1;
        int res=grid[row][col];
        q.push({row,col});
        while(!q.empty()){
            int mrow=q.front().first;
            int mcol=q.front().second;
            q.pop();
            int drow[]={-1,0,1,0};
            int dcol[]={0,1,0,-1};
            for(int i=0;i<4;i++){
                int nrow=mrow+drow[i];
                int ncol=mcol+dcol[i];
                if(nrow>=0 && ncol>=0 && nrow<n && ncol<m && !visit[nrow][ncol] && grid[nrow][ncol]>0){
                    res+=grid[nrow][ncol];
                    visit[nrow][ncol]=1;
                    q.push({nrow,ncol});
                }
            }
        }
        return res;
    }
public:
    int findMaxFish(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        if(n==0 ||m==0) return 0;
        //vector<int> res;
        int maxi=0;
        vector<vector<int>> visit(n,vector<int> (m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visit[i][j] && grid[i][j]>0){
                   int a=bfs(i,j,visit,grid);
                   maxi=max(maxi,a);
                }
            }
        }
        return maxi;
    }
};