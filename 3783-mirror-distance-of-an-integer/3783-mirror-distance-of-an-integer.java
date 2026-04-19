class Solution {
    public int mirrorDistance(int n) {
        return Math.abs(n-reverse(n));
    }
    public int reverse(int n){
        int fin=0;
        while(n!=0){
            int d=n%10;
            fin=(fin*10)+d;
            n=n/10;
        }
        return fin;
    }
}