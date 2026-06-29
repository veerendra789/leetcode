class Solution {
public:
    string sortVowels(string s) {
        string vow="";
        for(char c:s){
            if(tolower(c)=='a'||tolower(c)=='e'||tolower(c)=='i'||tolower(c)=='o'||tolower(c)=='u'){
                vow+=c;
            }
        }
        int j=0;
        sort(vow.begin(),vow.end());
        for(int i=0;i<s.size();i++){
            if(tolower(s[i])=='a'||tolower(s[i])=='e'||tolower(s[i])=='i'||tolower(s[i])=='o'||tolower(s[i])=='u'){
                s[i]=vow[j];
                j++;
            }
        }
        return s;
    }
};