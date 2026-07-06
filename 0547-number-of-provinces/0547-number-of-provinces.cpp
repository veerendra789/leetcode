class Solution {
private:
    void dfs(int node,vector<int> adj[],vector<int> &visit){
        visit[node]=1;
        for(auto &it:adj[node]){
            if(!visit[it]){
                dfs(it,adj,visit);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& is) {
        int v=is.size();

        vector<int> adj[v];
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                if(is[i][j]==1 && i!=j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        int c=0;
        vector<int> visit(v,0);
        for(int i=0;i<v;i++){
            if(!visit[i]){
                c++;
                dfs(i,adj,visit);
            }
        }
        return c;
    }
};