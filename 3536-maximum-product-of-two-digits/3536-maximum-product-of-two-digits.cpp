class Solution {
public:
    int maxProduct(int n) {
        vector<int> res;
        while(n>0){
            int d=n%10;
            
            res.push_back(d);
            n=n/10;
        }
        sort(res.begin(),res.end());
        int s=res.size();
        int c=res[s-1]*res[s-2];
        return c;
    }
};