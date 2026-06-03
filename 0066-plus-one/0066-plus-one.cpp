class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        int n=d.size();
        for(int i=n-1;i>=0;i--){
            if(d[i]<9){
                d[i]=d[i]+1;
                return d;
            }
            d[i]=0;
        }
        vector<int> v(n,0);
        v.insert(v.begin(),1);
        return v;
        
    }
};