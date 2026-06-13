class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
    map<int, char> mp;

    for (int i = 0; i < 26; i++) {
        mp[i] = 'z' - i;
    }
    string res="";
    int n=words.size();
    int m=weights.size();
    map<char,int> mp1;
    int j=0;
    for(char i='a';i<='z';i++){
        mp1[i]=weights[j];
        j++;
    }
    for(int i=0;i<n;i++){
        int s=0;
        for(int k=0;k<words[i].size();k++){
            s+=mp1[words[i][k]];
        }
        s=s%26;
        res+=mp[s];
    }
    return res;
    }
};