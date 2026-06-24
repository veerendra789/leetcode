class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>> q;
        for(int num:nums){
            q.push(num);
        }
        int n=nums.size();
        vector<int> arr;
        while(!q.empty()){
            int d=q.top();
            q.pop();
            arr.push_back(q.top());
            arr.push_back(d);
            q.pop();
        }
        return arr;
    }
};