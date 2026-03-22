class Solution {
    public int pivotInteger(int n) {
        int tsum=(n*(n+1))/2;
        int lsum=0,rsum=tsum;
        for(int i=1;i<=n;i++){
            rsum=rsum-i;
            if(rsum==lsum){
                return i;
            }
            lsum=lsum+i;
        }
        return -1;
    }
}