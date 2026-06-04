class Solution {
public:
    char findTheDifference(string s, string t) {
        if(s==""){
            return t[0];
        }
        map<char,int> mp2;
        for(int j=0;j<t.size();j++){
            mp2[t[j]]++;
        }
        for(int i=0;i<s.size();i++){
            mp2[s[i]]--;
            if(mp2[s[i]]==0){
                mp2.erase(s[i]);
            }
        }
        return mp2.begin()->first;
    }
};