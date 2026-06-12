class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1) return true;
        int l=0,r=num/2;
        while(l<=r){
            long mid=((l+r)/2);
            if(mid*mid==num) return true;
            else if(mid*mid>num){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
    return false;
    }
};