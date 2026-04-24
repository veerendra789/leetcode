class Solution {
    public int countPrimeSetBits(int left, int right) {
        int a=0;
        for(int j=left;j<=right;j++){
            if(ispr(bit(j))){
                a+=1;
            }
        }
        return a;
    }
    public boolean ispr(String s){
        int c=0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='1'){
                c+=1;
            }

        }
        boolean isPrime = true;

        if (c <= 1) {
            isPrime = false;
        } else {
            for (int i = 2; i <= Math.sqrt(c); i++) {
                if (c % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        return isPrime;
        
    }
    public String bit(int n){
        String b="";
        while(n>0){
            int rem=n%2;
            b+=rem;
            n=n/2;
        }
        return b;
    }
}