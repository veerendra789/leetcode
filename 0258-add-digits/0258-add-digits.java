class Solution {
    public int addDigits(int num) {
        if(num<10){
            return num;
        }
        else{
            return s(num);
        }
        
    }
    public int s(int n){
        int sum=0;
        while(n!=0){
            int m=n%10;
            sum=sum+m;
            n=n/10;
        }
        if(sum<10){
            return sum;
        }
        else{
            return sum=s(sum);
        }
    }
}