class Solution {
public:
    int maxNumberOfBalloons(string text) {
        if(text.size()<7) return 0;
        map<char,int> mp;
        for(char c:text){
            mp[c]++;
        }
        if(!mp.count('b')||!mp.count('a')||!mp.count('l')||!mp.count('o')||!mp.count('n')){
            return 0;
        }
        mp['l']=mp['l']/2;
        mp['o']=mp['o']/2;
        int mini=INT_MAX;
        for(auto it:mp){
            if(it.first=='b'||it.first=='a'||it.first=='l'||it.first=='o'||it.first=='n'){
                mini=min(mini,it.second);
            }
        }
        return mini;
    }
};