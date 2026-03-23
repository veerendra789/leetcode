class Solution {
    public int climbStairs(int n) {
        if(n==0||n==1){
            return 1;
        }
        int a=1,b=1,cur=0;
        for(int i=2;i<=n;i++){
            cur=a+b;
            b=a;
            a=cur;
        }
        return cur;
    }
}