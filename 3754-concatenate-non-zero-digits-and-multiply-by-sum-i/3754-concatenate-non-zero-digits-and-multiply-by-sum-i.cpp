class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0) return 0;
        long long res;
        long long su=0;
        string num="";
        string s=to_string(n);
        for(char c:s){
            if(isdigit(c)&& c!='0'){
                su+=(c-'0');
                num+=c;
            }
        }
        long long a=stoi(num);
        res=a*su;
        return res;
    }
};