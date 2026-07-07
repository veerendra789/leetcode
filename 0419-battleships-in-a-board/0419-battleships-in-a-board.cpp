class Solution {
private:
    void bfs(int row,int col,vector<vector<int>> &visit,vector<vector<char>>& board){
        int n=board.size();
        int m=board[0].size();
        queue<pair<int,int>> q;
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
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !visit[nrow][ncol] && board[nrow][ncol]=='X'){
                    visit[nrow][ncol]=1;
                    q.push({nrow,ncol});
                }
            }
        }
    }
public:
    int countBattleships(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        int c=0;
        vector<vector<int>> visit(n,vector<int> (m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visit[i][j] && board[i][j]=='X'){
                    bfs(i,j,visit,board);
                    c++;
                }
            }
        }
        return c;
    }
};