class Solution {
    public double trimMean(int[] arr) {
        double sum=0;
        int n=arr.length;
        Arrays.sort(arr);
        for(int i=n/20;i<n-n/20;++i){
            sum=sum+arr[i];
        }
        return sum/(n*9/10);
    }
}