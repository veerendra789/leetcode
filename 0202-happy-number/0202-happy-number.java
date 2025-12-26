class Solution {
    public boolean isHappy(int n) {
        int ans=sqr(n);
        
        if(ans==1 || ans==7){
            return true;
        }
        else{
            return false;
        }
    }
    public static int sqr(int n){
        int rem,s=0;
        while(n>0){
            rem=n%10;
            s=s+(rem*rem);
            n=n/10;
        }
        if(s>9){
            return sqr(s);
        }
        else{
            return s;
        }
    }
}