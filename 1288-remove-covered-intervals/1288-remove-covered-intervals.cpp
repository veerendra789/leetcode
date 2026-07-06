class Solution {
public:
    static bool comp(const vector<int> &a,const vector<int> &b){
        if(a[0]==b[0]) return a[1]>b[1];
        return a[0]<b[0];
    }
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),comp);
        int right=intervals[0][1];
        int ans=1;
        for(int i=1;i<intervals.size();i++){
            int r=intervals[i][1];
            if(r>right){
                ans++;
                right=r;
            }
        }
        return ans;
    }
};