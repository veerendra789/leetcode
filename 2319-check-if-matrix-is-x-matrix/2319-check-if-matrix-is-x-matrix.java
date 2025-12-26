class Solution {
    public boolean checkXMatrix(int[][] grid) {
        int c=0;
        int n=grid.length;
        for(int i=0;i<grid.length;i++){
            for(int j=0;j<grid.length;j++){
                if((i==j) || (i+j==(grid.length)-1)){
                    if(grid[i][j]!=0){
                         c=c+1;
                    }
                }
                else{
                    if(grid[i][j]==0){
                        c=c+1;
                    }

                }
            }
        }
        if(c==(n*n)){
            return true;
        }
    return false;
    }
}