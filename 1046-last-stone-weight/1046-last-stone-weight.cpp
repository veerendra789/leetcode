class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        priority_queue<int> q;
        for(int num:stones){
            q.push(num);
        }
        while(q.size()>1){
            int y=q.top();
            q.pop();
            int x=q.top();
            q.pop();
            if(x==y){
                if(q.empty()) return 0;
                else{
                    continue;
                }
            }
            else{
                q.push(abs(y-x));
            }
            
        }
        return q.top();
    }
};