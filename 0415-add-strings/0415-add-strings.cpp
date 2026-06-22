class Solution {
public:
    string addStrings(string num1, string num2) {
        string res="";
        int n=num1.size(),m=num2.size();
        int i=n-1,j=m-1;
        int carry=0;
        while(i>=0 || j>=0 || carry!=0){
            int s=0;
            s+=carry;
            if(i>=0){
                s+=(num1[i]-'0');
                i--;
            }
            if(j>=0){
                s+=(num2[j]-'0');
                j--;
            }
            //s+=carry;
            carry=s/10;
            s=s%10;
            res+=to_string(s); 
        }
        reverse(res.begin(),res.end());
        return res;
    }
};