class Solution {
private:
    void dfs(int row,int col ,vector<vector<int>> &visit,vector<vector<char>> &board){
        int n=board.size();
        int m=board[0].size();
        visit[row][col]=1;
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int nrow=row+drow[i];
            int ncol=col+dcol[i];
            if( nrow>=0 && nrow<n && ncol>=0 && ncol<m && !visit[nrow][ncol] && board[nrow][ncol]=='O'){
                dfs(nrow,ncol,visit,board);
            }
        }
    }
public:
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        if(n<3 || m<3) return ;
        vector<vector<int>> visit(n,vector<int> (m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='O' && (i==0 ||i==n-1 || j==0 ||j==m-1)){
                    dfs(i,j,visit,board);
                }
            }
        }
        for(int i=1;i<n-1;i++){
            for(int j=1;j<m-1;j++){
                if(board[i][j]=='O' && !visit[i][j]){
                    board[i][j]='X';
                }
            }
        }
    }
};