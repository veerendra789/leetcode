class Solution {
public:
    vector<int> finalPrices(vector<int>& pri) {
        int n=pri.size();
        stack<int> st;
        vector<int> res=pri;
        //res[n-1]=pri[n-1];
        //st.push(pri[n-1]);
        for(int i=n-1;i>=0;i--){
                while(!st.empty() && pri[i]<st.top()){
                    st.pop();
                }
                if(!st.empty()) res[i]=pri[i]-st.top();
                st.push(pri[i]);
        }
        return res;
    }
};