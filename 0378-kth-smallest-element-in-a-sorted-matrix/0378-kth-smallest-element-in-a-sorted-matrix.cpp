class Solution {
public:
    int kthSmallest(vector<vector<int>>& m, int k) {
        priority_queue<int> q;
        int n=m.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                q.push(m[i][j]);
            }
        }
        int c=0;
        int key=(n*n)-k;
        while(!q.empty()){
            if(key==c){
                return q.top();
            }
            c++;
            q.pop();
        }
        return 0;
    }
};