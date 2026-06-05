class Solution {
public:
    vector<int> generaterow(int n){
        long long ans=1;
        vector<int> a;
        a.push_back(1);
        for(int i=1;i<n;i++){
            ans=ans*(n-i);
            ans=ans/i;
            a.push_back(ans);
        }
        return a;
    }
    vector<vector<int>> generate(int num) {
        vector<vector<int>> fin;
        for(int i=1;i<=num;i++){
            fin.push_back(generaterow(i));
        }
        return fin;
    }
};