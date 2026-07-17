class Solution {
public:
    vector<int> findOrder(int v, vector<vector<int>>& pre) {
        vector<int> adj[v];
        for(int i=0;i<pre.size();i++){
            reverse(pre[i].begin(),pre[i].end());
        }
        for(int i=0;i<pre.size();i++){
            int u=pre[i][0];
            int m=pre[i][1];
            adj[u].push_back(m);
        }
        vector<int> in(v,0);
        for(int i=0;i<v;i++){
            for(auto it:adj[i]){
                in[it]++;
            }
        }
        queue<int> q;
        vector<int> ans;
        for(int i=0;i<v;i++){
            if(in[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(auto it:adj[node]){
                in[it]--;
                if(in[it]==0) q.push(it);
            }
        }
        if(ans.size()!=v) return {};
        return ans;
    }
};