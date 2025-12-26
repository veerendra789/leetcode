class Solution {
    public int maxProfit(int[] prices) {
        int min=Integer.MAX_VALUE;
        int maxp=0;
        for(int i=0;i<prices.length;i++){
            if(prices[i]<min){
                min=prices[i];
            }
            int c=prices[i]-min;
            if(c>maxp){
                maxp=c;
            }
        }
        return maxp;
    }
}