class Solution {
public:
    string reversePrefix(string s, int k) {
        int n=s.size();
        int j=0;
        while(j<k){
            j++;
        }
        j=j-1;
        int i=0;
        while(i<=j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
    }
};