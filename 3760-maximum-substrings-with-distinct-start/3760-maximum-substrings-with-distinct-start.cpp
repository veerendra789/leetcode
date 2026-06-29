class Solution {
public:
    int maxDistinct(string s) {
        map<char,int> mp;
        for(char c:s){
            mp[c]++;
        }
        int c=0;
        for(auto it:mp){
            c++;
        }
        return c;
    }
};