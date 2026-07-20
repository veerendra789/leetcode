class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int v=graph.size();
        vector<int> in(v,0);
        vector<vector<int>> adj(v);
        for(int i=0;i<v;i++){
            for(auto j:graph[i]){
                adj[j].push_back(i);
                in[i]++;
            }
        }

        queue<int> q;
        for(int i=0;i<v;i++){
            if(in[i]==0){
                q.push(i);
            }
        }
        vector<int> res;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            res.push_back(node);
            for(auto it: adj[node]){
                in[it]--;
                if(in[it]==0) q.push(it);
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};