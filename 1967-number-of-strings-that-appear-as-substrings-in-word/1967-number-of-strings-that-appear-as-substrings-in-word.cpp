class Solution {
public:
    bool issub(string s,string t){
        return t.find(s)!=string::npos;
    }
    int numOfStrings(vector<string>& patterns, string word) {
        int c=0;
        for(string a:patterns){
            if(issub(a,word)){
                c++;
            }
        }
        return c;
    }
};