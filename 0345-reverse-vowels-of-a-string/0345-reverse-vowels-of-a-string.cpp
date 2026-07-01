class Solution {
public:
    string reverseVowels(string s) {
        vector<char> vow;
        for(char c :s){
            if(tolower(c)=='a' ||tolower(c)=='e' || tolower(c)=='i'||tolower(c)=='o'||tolower(c)=='u'){
                vow.push_back(c);
            }
        }
        reverse(vow.begin(),vow.end());
        int j=0;
        for(int i=0;i<s.size();i++){
            if(tolower(s[i])=='a' ||tolower(s[i])=='e' || tolower(s[i])=='i'||tolower(s[i])=='o'||tolower(s[i])=='u'){
                s[i]=vow[j];
                j++;
            }
        }
        return s;
    }
};