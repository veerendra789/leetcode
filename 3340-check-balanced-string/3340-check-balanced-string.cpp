class Solution {
public:
    bool isBalanced(string num) {
        int even=0,odd=0;
        for(int i=0;i<num.size();i++){
            int d=num[i]-'0';
            if(i%2==0){
                even+=d;
            }
            else{
                odd+=d;
            }
        }
        return even==odd;
    }
};