class Solution {
public:
    vector<int> getRow(int n) {
        long long ans=1;
        vector<int> a;
        a.push_back(1);
        for(int i=1;i<n+1;i++){
            ans=ans*(n+1-i);
            ans=ans/i;
            a.push_back(ans);
        }
        return a;
    }
};