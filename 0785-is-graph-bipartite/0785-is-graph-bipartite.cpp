class Solution {
private:
    bool dfs(int node,int cl,int col[],vector<vector<int>>& graph){
        col[node]=cl;
        for(auto it: graph[node]){
            if(col[it]==-1){
               if(dfs(it,!cl,col,graph)==false) return false;
            }
            else if(col[it]==cl){
                return false;
            }
        }
        return true;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        int col[n];
        for(int i=0;i<n;i++) col[i]=-1;
        for(int i=0;i<n;i++){
            if(col[i]==-1){
               if(dfs(i,0,col,graph)==false) return false;
            }
        }
        return true;
    }
};