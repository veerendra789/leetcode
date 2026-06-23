class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> q;
        int n=gifts.size();
        for(int num:gifts){
            q.push(num);
        }
        int key=0;
        while(key!=k){
            q.push(sqrt(q.top()));
            q.pop();
            key++;
        }
        long long res=0;
        while(!q.empty()){
            res+=q.top();
            q.pop();
        }
        return res;
    }
};