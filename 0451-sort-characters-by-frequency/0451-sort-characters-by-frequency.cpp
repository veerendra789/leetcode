class Solution {
public:
    string multiple(char c,int n){
        string result;
        while(n>0){
            result+=c;
            n--;
        }
        return result;
    }
    string frequencySort(string s) {
        map<char,int> mp;
        for(char c:s){
            mp[c]++;
        }
        priority_queue<pair<int,char>> q;
        for(auto it:mp){
            q.push({it.second,it.first});
        }
        string res;
        while(!q.empty()){
            char c=q.top().second;
            int f=q.top().first;
            res+=multiple(c,f);
            q.pop();
        }
        return res;
    }
};