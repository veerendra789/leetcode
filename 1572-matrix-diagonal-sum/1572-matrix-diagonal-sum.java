class Solution {
    public int diagonalSum(int[][] mat) {
        int p_d=0,s_d=0;
        int n=mat.length;
        for(int i=0;i<mat.length;i++){
            for(int j=0;j<mat.length;j++){
                if(i==j){
                    p_d=p_d+mat[i][j];
                }
                if(i+j==(n-1)){
                    s_d=s_d+mat[i][j];
                }
            }
        }
        if(n%2==0){
            return p_d+s_d;
        }
        else{
            return p_d+s_d-mat[n/2][n/2];
        }
    }
}