class Solution {
    public int diagonalPrime(int[][] nums) {
        int m=0;
        int l=nums.length;
        for(int i=0;i<nums.length;i++){
            for(int j=0;j<nums.length;j++){
                if((i==j) || (i+j==l-1)){
                    if(isprime(nums[i][j])){
                        int m_v=Math.max(m,nums[i][j]);
                        m=m_v;
                    }

                }
            }
        }
        return m;
    }
    public boolean isprime(int n){
        int c=0;
        if(n==1){
            return false;
        }
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
}