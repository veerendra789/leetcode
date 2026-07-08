class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int c) {
        int n=image.size();
        int m=image[0].size();
        int in=image[sr][sc];
        vector<vector<int>> visit(n,vector<int> (m,0));
        queue<pair<int,int>> q;
        visit[sr][sc]=c;
        q.push({sr,sc});
        while(!q.empty()){
            int mrow=q.front().first;
            int mcol=q.front().second;
            q.pop();
            int drow[]={-1,0,1,0};
            int dcol[]={0,1,0,-1};
            for(int i=0;i<4;i++){
                int nrow=mrow+drow[i];
                int ncol=mcol+dcol[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && visit[nrow][ncol]!=c && image[nrow][ncol]==in){
                    visit[nrow][ncol]=c;
                    q.push({nrow,ncol});
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visit[i][j] && image[i][j]!=0){
                    visit[i][j]=image[i][j];
                }
            }
        }
        return visit;
    }
};