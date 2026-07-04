class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int,int>>> res(n+1);
        for(auto &road:roads){
            int u=road[0];
            int v=road[1];
            int w=road[2];
            res[u].push_back({v,w});
            res[v].push_back({u,w});
        }
        vector<bool> visit(n+1,false);
        queue<int> q;
        q.push(1);
        visit[1]=true;
        int ans=INT_MAX;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto &[i,j]:res[node]){
                ans=min(ans,j);
                if(!visit[i]){
                    visit[i]=true;
                    q.push(i);
                }
            }
        }
        return ans;
    }
};