class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        queue<pair<pair<int,int>,int>> q;
        vector<vector<int>> visit(n,vector<int> (m,0));
        vector<vector<int>> dist(n,vector<int> (m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    q.push({{i,j},0});
                    visit[i][j]=1;
                }
                else{
                    visit[i][j]=0;
                }
            }
        }
        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int t=q.front().second;
            q.pop();
            dist[row][col]=t;
            int drow[]={-1,0,1,0};
            int dcol[]={0,1,0,-1};
            for(int i=0;i<4;i++){
                int nrow=row+drow[i];
                int ncol=col+dcol[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && visit[nrow][ncol]==0){
                    visit[nrow][ncol]=1;
                    q.push({{nrow,ncol},t+1});
                }
            }
        }
        return dist;
    }
};