class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int> res(n+1,0);
        res[0]=0;
        for(int i=1;i<n+1;i++){
            res[i]=res[i-1]+gain[i-1];
        }
        return max(res);
    }
    int max(vector<int> &a){
        int m=a.size();
        int ma=INT_MIN;
        for(int i=0;i<m;i++){
            if(a[i]>ma){
                ma=a[i];
            }
        }
        return ma;
    }
};