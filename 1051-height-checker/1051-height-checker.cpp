class Solution {
public:
    int heightChecker(vector<int>& h) {
        vector<int> exp;
        for(int num:h){
            exp.push_back(num);
        }
        sort(exp.begin(),exp.end());
        int c=0;
        for(int i=0;i<h.size();i++){
            if(h[i]!=exp[i]){
                c++;
            }
        }
        return c;
    }
};