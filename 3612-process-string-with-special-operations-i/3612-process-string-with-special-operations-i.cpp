class Solution {
public:
    string processStr(string s) {
        int n=s.size();
        string result;
        for(int i=0;i<n;i++){
            if(s[i]=='*'){
                result=ass(result);
            }
            else if(s[i]=='#'){
                result=hash(result);
            }
            else if(s[i]=='%'){
                result=mod(result);
            }
            else{
                result+=s[i];
            }
        }
        return result;
    }
    string ass(string s){
        if(s.empty()) return "";
        string res;
        for(int i=0;i<s.size()-1;i++){
            res+=s[i];
        }
        return res;
    }
    string hash(string s){
        string res=s;
        for(int i=0;i<s.size();i++){
            res+=s[i];
        }
        return res;
    }
    string mod(string s){
        string rev(s.rbegin(), s.rend());
        return rev;
    }
};