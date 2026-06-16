class Solution {
public:
    string clearDigits(string s) {
       int n=s.size();
       string res;
       stack<char> st;
       for(char i:s) {
        if(i>='0' &&i<='9'){
            st.pop();
        }
        else{
        st.push(i);
        }
       }
       while(!st.empty()){
        res+=st.top();
        st.pop();
       }
       reverse(res.begin(),res.end());
       return res;
    }
};