class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int> vowel;
        map<char,int> cons;
        for(char c:s){
            if(c=='a' || c=='e' || c=='i' ||c=='o'||c=='u'){
                vowel[c]++;
            }
            else{
                cons[c]++;
            }
        }
        int maxi1=0;
        for(auto it:vowel){
            maxi1=max(maxi1,it.second);
        }
        int maxi2=0;
        for(auto it1:cons){
            maxi2=max(maxi2,it1.second);
        }
        return maxi1+maxi2;
    }
};