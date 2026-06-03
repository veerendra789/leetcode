class Solution {
public:
    int earliestFinishTime(vector<int>& a, vector<int>& b, vector<int>& c, vector<int>& d) {
        int l=solve(a,b,c,d);
        int w=solve(c,d,a,b);
        return min(l,w);
        
    }
    int solve(vector<int>& s1,vector<int>& e1,vector<int>& s2,vector<int>& e2){
        int ans=INT_MAX;
        int fin=INT_MAX;
        for(int i=0;i<s1.size();i++){
            ans=min(ans,s1[i]+e1[i]);
        }
        for(int i=0;i<s2.size();i++){
           fin=min(fin,max(ans,s2[i])+e2[i]);
        }
        return fin;
    }
};