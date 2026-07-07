class Solution {
private:
    long long bfs(int row,int col,vector<vector<int>> &visit,vector<vector<int>>& grid){
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>> q;
        visit[row][col]=1;
        q.push({row,col});
        long long res=grid[row][col];
        while(!q.empty()){
            int mrow=q.front().first;
            int mcol=q.front().second;
            q.pop();
            int drow[]={-1,0,1,0};
            int dcol[]={0,1,0,-1};
            //res+=grid[mrow][mcol];
            for(int k=0;k<4;k++){
                int nrow=mrow+drow[k];
                int ncol=mcol+dcol[k];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !visit[nrow][ncol] && grid[nrow][ncol]>0){
                    res+=grid[nrow][ncol];
                    visit[nrow][ncol]=1;
                    q.push({nrow,ncol});
                }
            }
        }
        return res;
    }
public:
    int countIslands(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
        vector<long long> result;
        vector<vector<int>> visit(n,vector<int> (m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visit[i][j] && grid[i][j]>0){
                    long long a=bfs(i,j,visit,grid);
                    result.push_back(a);
                }
            }
        }
        int c=0;
        for(long long num:result){
            //cout<<num<<" ";
            if(num!=0 && num%k==0){
                c++;
            }
        }
        return c;
    }
};