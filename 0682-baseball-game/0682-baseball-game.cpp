class Solution {
public:
    int calPoints(vector<string>& op) {
        int ans=0;
        int v1,v2;
        stack<int> st;
        for(string i:op){
            if(i=="C"){
                st.pop();
            }
            else if(i=="D"){
                st.push(st.top()*2);
            }
            else if(i=="+"){
                v1=st.top();
                st.pop();
                v2=st.top();
                st.push(v1);
                st.push(v1+v2);
            }
            else{
                st.push(stoi(i));
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};