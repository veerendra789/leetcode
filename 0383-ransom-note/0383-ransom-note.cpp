class Solution {
public:
    bool canConstruct(string r, string m) {
       map<char,int> mp1;
       map<char,int> mp2;
       for(char i:r){
        mp1[i]++;
       } 
       for(char i:m){
        mp2[i]++;
       }
       for(int i=0;i<r.size();i++){
        if(mp1[r[i]]>mp2[r[i]]){
            return false;
        }
       }
       return true;
    }
};